#include <iostream>
#include <string>
#include <utility>

struct UserProfile {
	std::string name;
	int friends;
};

std::pair<std::string, int> most_popular(UserProfile profile1, UserProfile profile2) {
	if (profile1.friends > profile2.friends) {
		return {profile1.name, profile1.friends};
	} else if (profile1.friends < profile2.friends) {
		return {profile2.name, profile2.friends};
	} else {return {"Both", profile1.friends};}
}

int main(){
	UserProfile profile1{"Nathan", 100};
	UserProfile profile2{"Tara", 250};

	auto popular = most_popular(profile1, profile2);

	std::cout << "Comparing Users..." << std::endl;
	std::cout << "Most popular: " << popular.first << " with " << popular.second << std::endl;
	
	return 0;
}