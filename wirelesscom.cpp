#include <iostream>
#include <string>
using namespace std;

// Hypothetical WirelessDevice class representing a wireless communication device
class WirelessDevice {
private:
    string deviceName;

public:
    WirelessDevice(const string& name) : deviceName(name) {}

    // Send a message to another wireless device
    void sendMessage(const WirelessDevice& receiver, const string& message) {
        cout << "Sending message from " << deviceName << " to " << receiver.deviceName << ": " << message << endl;
    }

    // Receive a message from another wireless device
    void receiveMessage(const WirelessDevice& sender, const string& message) {
        cout << deviceName << " received a message from " << sender.deviceName << ": " << message << endl;
    }
};

int main() {
    // Create two hypothetical wireless devices
    WirelessDevice device1("Device 1");
    WirelessDevice device2("Device 2");

    // Simulate message exchange between the devices
    device1.sendMessage(device2, "Hello, how are you?");
    device2.receiveMessage(device1, "Hi! I'm doing well, thanks!");

    return 0;
}
