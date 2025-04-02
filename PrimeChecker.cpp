#include "PrimeChecker.hpp"

bool PrimeChecker::isPrime(uint16_t n) {

    bool returnValue = true;

    // Check smaller numbers or even numbers
    if (n < 2 || (n % 2 == 0)) {
        returnValue = false;
    } else {

        // Check only odd divisors up to sqrt(n)
        for (uint16_t i = 3; (i * 3) <= n; i+= 2 ) {
            if (n % i == 0) {
                returnValue = false;
                break;
            }
        }
    }
    return returnValue;
}