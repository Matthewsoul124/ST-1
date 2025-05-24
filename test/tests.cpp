// Copyright 2025 UNN-CS
#include "../src/alg.h"
#include <cstdint>

#include <gtest/gtest.h>

TEST(PrimeSumTest, SumOfPrimes1) {
  uint64_t res = getSumOfPrimes(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}

TEST(PrimeSumTest, SumOfPrimes2) {
  uint64_t res = getSumOfPrimes(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(PrimeCheckTest, Basic1) { EXPECT_FALSE(isPrime(1)); }
TEST(PrimeCheckTest, Basic2) { EXPECT_TRUE(isPrime(2)); }
TEST(PrimeCheckTest, Basic3) { EXPECT_TRUE(isPrime(3)); }
TEST(PrimeCheckTest, Basic4) { EXPECT_FALSE(isPrime(4)); }
TEST(PrimeCheckTest, Basic5) { EXPECT_TRUE(isPrime(5)); }
TEST(PrimeCheckTest, Basic6) { EXPECT_FALSE(isPrime(6)); }
TEST(PrimeCheckTest, Basic7) { EXPECT_TRUE(isPrime(7)); }

TEST(NextPrimeTest, Basic1) { EXPECT_EQ(2, getNextPrime(1)); }
TEST(NextPrimeTest, Basic2) { EXPECT_EQ(3, getNextPrime(2)); }
TEST(NextPrimeTest, Basic3) { EXPECT_EQ(5, getNextPrime(3)); }
TEST(NextPrimeTest, Basic4) { EXPECT_EQ(5, getNextPrime(4)); }
TEST(NextPrimeTest, Basic5) { EXPECT_EQ(7, getNextPrime(5)); }
TEST(NextPrimeTest, Basic6) { EXPECT_EQ(7, getNextPrime(6)); }
TEST(NextPrimeTest, Basic7) { EXPECT_EQ(11, getNextPrime(7)); }
TEST(NextPrimeTest, Basic8) { EXPECT_EQ(11, getNextPrime(8)); }
TEST(NextPrimeTest, Basic9) { EXPECT_EQ(11, getNextPrime(9)); }
TEST(NextPrimeTest, Basic10) { EXPECT_EQ(11, getNextPrime(10)); }
