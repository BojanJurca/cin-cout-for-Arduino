#include <console.hpp>

void setup () {
    cinit (); // three optional arguments: bool waitForSerial = false, unsigned int waitAfterSerial = 100 [ms], unsigned int serialSpeed = 115200 (9600 for AVR boards)

    cout << "Please enter integer number. ";
    int i;
    cin >> i;
    cout << "You entered " << i << "." << endl;
}

void loop () {

}
