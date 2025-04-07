/*
    File name: TimerClass.cpp 
    Description: This program allows for a timer to be created to time how long it takes sections of code to run.
    Name: Nathan Huffman
    Date: 4/7/2025
*/

# include <iostream>
# include <chrono>
# include <cmath>

struct TimerClass{
    public:
        TimerClass(const char *name) : m_timestamp{std::chrono::steady_clock::now()}, m_name{name}{}; // This constructor saves the current time and the timer's name.

        ~TimerClass(){ // This destructor times how much time has passed in microseconds since the code was executed.
            auto current = std::chrono::steady_clock::now() - m_timestamp; // The time of the constructor is subtracted from the current time to get the age of the timer.
            std::cout << m_name << ": " << std::chrono::duration_cast<std::chrono::microseconds>(current).count(); 
            std::cout << " microseconds\n";} // The age of the timer is printed.

        TimerClass(const TimerClass &rhs) : m_timestamp{rhs.m_timestamp}{} // This is the copy constructor.

        TimerClass& operator=(const TimerClass &rhs){ // This is the copy assignment operator.
            if (this == &rhs){return *this;};
            m_timestamp = rhs.m_timestamp;
            m_name = rhs.m_name;
            return *this;}
        
        TimerClass(TimerClass &&rhs) noexcept : m_timestamp{rhs.m_timestamp}, m_name{rhs.m_name}{}; // This is the move assignment.

        TimerClass& operator=(TimerClass &&rhs) noexcept { // This is the move assignment operator.
            if (this == &rhs){return *this;};
            m_timestamp = rhs.m_timestamp;
            m_name = rhs.m_name;
            return *this;}

    private:
        std::chrono::steady_clock::time_point m_timestamp; // This records the time of day and declares it as a variable.
        const char *m_name{}; // This records the name of the timer.
};

void HeavyComputation(TimerClass&& timer){ // This function receives a timer as a reference that is kept track of while performing a heavy computation.
    volatile double result = 0.0;
    long iterations = 10000000;
    while (iterations--) {
        result += std::sin(iterations) * std::cos(iterations);
    };
};

int main(){
    std::cout << "Let's Test A Timer Moved Into a Function:\n";
    HeavyComputation(TimerClass("HeavyComputationTimer")); // The timer is created and sent to the function.
    return 0;
}