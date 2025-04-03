#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "PrimeChecker.hpp"


TEST_CASE("Test PrimeChecker with 0 and 1 (not prime)") {
    PrimeChecker pc;
    REQUIRE(!pc.isPrime(0));
    REQUIRE(!pc.isPrime(1));
}

TEST_CASE("Test PrimeChecker with 2 (smallet prime)") {
    PrimeChecker pc;
    REQUIRE(pc.isPrime(2));
}

TEST_CASE("Test PrimeChecker with small primes") {
    PrimeChecker pc;
    REQUIRE(pc.isPrime(3));
    REQUIRE(pc.isPrime(7));
    REQUIRE(pc.isPrime(11));
    REQUIRE(pc.isPrime(13));
    REQUIRE(pc.isPrime(17));
}

TEST_CASE("Test PrimeChecker with small non-primes") {
    PrimeChecker pc;
    REQUIRE(!pc.isPrime(9));
    REQUIRE(!pc.isPrime(15));
    REQUIRE(!pc.isPrime(21));
}

TEST_CASE("Test PrimeChecker with large primes") {
    PrimeChecker pc;
    REQUIRE(pc.isPrime(97));
    REQUIRE(pc.isPrime(199));
    REQUIRE(pc.isPrime(997));
}