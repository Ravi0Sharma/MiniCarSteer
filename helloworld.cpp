#include <iostream>
#include <string>
#include "PrimeChecker.hpp"

int main (int argc, char** argv) {
    
    if (argc == 2) {
        int number = std::stoi(argv[1]);
        PrimeChecker pc;

        std::cout << "LAST NAME, FIRST NAME; "
                  << number << " is a prime number? "
                  << pc.isPrime(number)
                  << std::endl;
    }

    return 0;
}