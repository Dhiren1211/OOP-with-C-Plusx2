#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int main()
{
    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random 4-digit PIN (0-9999)
    int pin = rand() % 10000;

    // Output the PIN with leading zeros to ensure 4 digits
    std::cout << "Generated 4-digit PIN: " << std::setfill('0') << std::setw(4) << pin << std::endl;

    return 0;
}
