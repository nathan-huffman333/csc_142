/*
    File name: LargeBucket.cpp 
    Description: This program allows for a large bucket class to be created to store up to 1MB of data.
    Name: Nathan Huffman
    Date: 4/8/2025
*/

# include <cstdio>
# include <cstddef>
# include <exception>
# include <new>

struct Bucket {
    static const size_t data_size{4096};
    std::byte data[data_size];
};

struct LargeBucket {
    static const size_t data_size{1000000};
    std::byte data[data_size];
};

struct Heap {
    void* allocate(size_t bytes) {
        if (bytes > LargeBucket::data_size) throw std::bad_alloc{};
        
        if (bytes > Bucket::data_size) { 
            for (size_t i = 0; i < n_heap_buckets; ++i) {
                if (!large_bucket_used[i]) {
                    large_bucket_used[i] = true;
                    printf("Allocated largeBucket to heap\n");
                    return largeBuckets[i].data;
                }
            }
        } else {
            for (size_t i = 0; i < n_heap_buckets; ++i) {
                if (!bucket_used[i]) {
                    bucket_used[i] = true;
                    printf("Allocated regular sized Bucket to heap\n");
                    return buckets[i].data;
                }
            }
        }

        throw std::bad_alloc{};
    }

    void free(void* p) {
        for (size_t i = 0; i < n_heap_buckets; ++i) {
            if (buckets[i].data == p) {
                bucket_used[i] = false;
                return;
            }
            if (largeBuckets[i].data == p) {
                large_bucket_used[i] = false;
                return;
            }
        }
    }

	static const size_t n_heap_buckets{10};
	Bucket buckets[n_heap_buckets];
    LargeBucket largeBuckets[n_heap_buckets];
    bool bucket_used[n_heap_buckets];
    bool large_bucket_used[n_heap_buckets];
};

Heap heap;

void* operator new(size_t n_bytes) {
    return heap.allocate(n_bytes);
}

void operator delete(void* p) noexcept {
    heap.free(p);
}

int main() {
    printf("Bucket address starts here: %p\n", heap.buckets);
    printf("LargeBucket address starts here: %p\n", heap.largeBuckets);

    try {
        while (true) {
            new Bucket;
			new LargeBucket; 
        }
    } catch (const std::bad_alloc&) {
        printf("std::bad_alloc caught.\n");
    }

    return 0;
}