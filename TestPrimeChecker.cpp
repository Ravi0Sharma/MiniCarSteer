#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "PrimeChecker.hpp"

TEST_CASE("Test PrimeChecker with prime number") {
    PrimeChecker pc;
    REQUIRE(pc.isPrime(5));
}

TEST_CASE("Test PrimeChecker with a non-prime number") {
    PrimeChecker pc;
    REQUIRE(!pc.isPrime(4));
}