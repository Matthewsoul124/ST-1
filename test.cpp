#include <gtest/gtest.h>
#include "alg.h"

TEST(PrimeSumTest, LargeRange) {
    uint64_t result = calculatePrimesSum(2000000);
    uint64_t expected = 142913828922;
    EXPECT_EQ(expected, result);
}

TEST(PrimeSumTest, SmallRange) {
    uint64_t result = calculatePrimesSum(10);
    uint64_t expected = 17;
    EXPECT_EQ(expected, result);
}

TEST(PrimeCheckTest, BasicCases) {
    EXPECT_FALSE(isNumberPrime(1));
    EXPECT_TRUE(isNumberPrime(2));
    EXPECT_TRUE(isNumberPrime(3));
    EXPECT_FALSE(isNumberPrime(4));
    EXPECT_TRUE(isNumberPrime(5));
    EXPECT_FALSE(isNumberPrime(6));
    EXPECT_TRUE(isNumberPrime(7));
}

TEST(NextPrimeTest, BasicCases) {
    EXPECT_EQ(2, findNextPrimeNumber(1));
    EXPECT_EQ(3, findNextPrimeNumber(2));
    EXPECT_EQ(5, findNextPrimeNumber(3));
    EXPECT_EQ(5, findNextPrimeNumber(4));
    EXPECT_EQ(7, findNextPrimeNumber(5));
    EXPECT_EQ(7, findNextPrimeNumber(6));
    EXPECT_EQ(11, findNextPrimeNumber(7));
    EXPECT_EQ(11, findNextPrimeNumber(8));
    EXPECT_EQ(11, findNextPrimeNumber(9));
    EXPECT_EQ(11, findNextPrimeNumber(10));
} 