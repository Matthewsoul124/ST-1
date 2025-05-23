// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime_basic1) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(st1, checkPrime_basic2) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime_basic3) {
  EXPECT_TRUE(checkPrime(3));
}

TEST(st1, checkPrime_basic4) {
  EXPECT_FALSE(checkPrime(4));
}

TEST(st1, checkPrime_basic5) {
  EXPECT_TRUE(checkPrime(5));
}

TEST(st1, checkPrime_basic6) {
  EXPECT_FALSE(checkPrime(6));
}

TEST(st1, checkPrime_basic7) {
  EXPECT_TRUE(checkPrime(7));
}

TEST(PrimeTest, nextPrime_basic1) {
  EXPECT_EQ(2, nextPrime(1));
}

TEST(PrimeTest, nextPrime_basic2) {
  EXPECT_EQ(3, nextPrime(2));
}

TEST(PrimeTest, nextPrime_basic3) {
  EXPECT_EQ(5, nextPrime(3));
}

TEST(PrimeTest, nextPrime_basic4) {
  EXPECT_EQ(5, nextPrime(4));
}

TEST(PrimeTest, nextPrime_basic5) {
  EXPECT_EQ(7, nextPrime(5));
}

TEST(PrimeTest, nextPrime_basic6) {
  EXPECT_EQ(7, nextPrime(6));
}

TEST(PrimeTest, nextPrime_basic7) {
  EXPECT_EQ(11, nextPrime(7));
}

TEST(PrimeTest, nextPrime_basic8) {
  EXPECT_EQ(11, nextPrime(8));
}

TEST(PrimeTest, nextPrime_basic9) {
  EXPECT_EQ(11, nextPrime(9));
}

TEST(PrimeTest, nextPrime_basic10) {
  EXPECT_EQ(11, nextPrime(10));
}
