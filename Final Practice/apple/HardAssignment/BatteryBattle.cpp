#include <iostream>
#include <string>
#include <utility>

enum class DeviceType {iPhone, iPad, Mac};

struct Device {
	DeviceType type;
	int battery;
};

std::string deviceToString(DeviceType device) {
	if (device == DeviceType::iPhone) {return "iPhone";
	} else if (device == DeviceType::iPad) {return "iPad";
	} else {return "Mac";};
};

std::pair<std::string, int> best_battery(Device device1, Device device2) {
	if (device1.battery > device2.battery) {
		return {deviceToString(device1.type), device1.battery};
	} else if (device1.battery < device2.battery) {
		return {deviceToString(device2.type), device2.battery};
	} else {return {"devices have equal battery and", device1.battery};};
};

int main() {
	Device device1{DeviceType::iPhone, 90};
	Device device2{DeviceType::iPad, 75};
	
	std::cout << "Comparing " << deviceToString(device1.type) << " with " << deviceToString(device2.type) << std::endl;

	auto compare = best_battery(device1, device2);
	std::cout << "\nResults indicate that the " << compare.first << " has (or have) " << compare.second << " percent battery, which is greater than or equal to the other device's battery" << std::endl;

	return 0;
}  