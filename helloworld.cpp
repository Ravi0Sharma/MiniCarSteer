#include <iostream>
#include <string>
#include "PrimeChecker.hpp"

int main (int argc, char** argv) {
    
    /* This statement checks whether exactly one argument is provided via the command line. */
    /* If an argument is provided, the program will proceed to check if the number is a prime. */
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