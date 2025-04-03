#include "PrimeChecker.hpp"

// Function to check if a number is a prime number
bool PrimeChecker::isPrime(uint16_t n) {

    bool returnValue = true;

    // Special case: 2 is the only even prime number
    if (n==2) {
        return true;
    }   

    // Reject numbers less than 2 and even numbers (except 2, already handled)
    if (n < 2 || (n % 2 == 0)) {
        returnValue = false;
    } else {

        // Loop through odd numbers starting from 3 up to sqrt(n)
        // If any number divides n evenly, it is not a prime number
        for (uint16_t i = 3; i * i <= n; i+= 2 ) {
            if (n % i == 0) {
                returnValue = false; 
                break;
            }
        }
    }
    // Return the result
    return returnValue;
}