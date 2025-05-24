// Copyright 2025 UNN-CS
#include <gtest/gtest.h>
#include <cstdint>
#include "../include/alg.h"

TEST(PrimeSumTest, SumOfPrimes1) {
  uint64_t result = getSumOfPrimes(10);
  uint64_t expected = 17; // 2 + 3 + 5 + 7
  EXPECT_EQ(result, expected);
}

TEST(PrimeSumTest, SumOfPrimes2) {
  uint64_t result = getSumOfPrimes(20);
  uint64_t expected = 77; // 2 + 3 + 5 + 7 + 11 + 13 + 17 + 19
  EXPECT_EQ(result, expected);
}

TEST(PrimeCheckTest, Basic1) {
  EXPECT_TRUE(isPrime(2));
  EXPECT_TRUE(isPrime(3));
  EXPECT_TRUE(isPrime(5));
  EXPECT_TRUE(isPrime(7));
  EXPECT_TRUE(isPrime(11));
}

TEST(PrimeCheckTest, Basic2) {
  EXPECT_FALSE(isPrime(1));
  EXPECT_FALSE(isPrime(4));
  EXPECT_FALSE(isPrime(6));
  EXPECT_FALSE(isPrime(8));
  EXPECT_FALSE(isPrime(9));
}

TEST(NextPrimeTest, Basic1) {
  EXPECT_EQ(getNextPrime(2), 3);
  EXPECT_EQ(getNextPrime(3), 5);
  EXPECT_EQ(getNextPrime(5), 7);
  EXPECT_EQ(getNextPrime(7), 11);
}

TEST(NextPrimeTest, Basic2) {
  EXPECT_EQ(getNextPrime(1), 2);
  EXPECT_EQ(getNextPrime(4), 5);
  EXPECT_EQ(getNextPrime(6), 7);
  EXPECT_EQ(getNextPrime(8), 11);
}

TEST(NthPrimeTest, Basic1) {
  EXPECT_EQ(getNthPrime(1), 2);
  EXPECT_EQ(getNthPrime(2), 3);
  EXPECT_EQ(getNthPrime(3), 5);
  EXPECT_EQ(getNthPrime(4), 7);
}

TEST(NthPrimeTest, Basic2) {
  EXPECT_EQ(getNthPrime(5), 11);
  EXPECT_EQ(getNthPrime(6), 13);
  EXPECT_EQ(getNthPrime(7), 17);
  EXPECT_EQ(getNthPrime(8), 19);
}
