// Copyright 2025 UNN-CS

#include "../include/alg.h"
#include <cstdint>

bool isPrime(uint64_t value) {
  if (value <= 1) {
    return false;
  }
  if (value == 2) {
    return true;
  }
  if (value % 2 == 0) {
    return false;
  }

  for (uint64_t i = 3; i * i <= value; i += 2) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t getNthPrime(uint64_t n) {
  if (n == 0) {
    return 0;
  }

  uint64_t count = 0;
  uint64_t num = 2;

  while (count < n) {
    if (isPrime(num)) {
      if (count == UINT64_MAX) { // Check for counter overflow
        return 0;
      }
      ++count;
    }
    if (count < n) {
      if (num == UINT64_MAX) { // Check for overflow
        return 0;
      }
      ++num;
    }
  }

  return num;
}

uint64_t getNextPrime(uint64_t value) {
  if (value < 2) {
    return 2;
  }

  if (value == UINT64_MAX) { // Check for maximum value
    return 0;
  }

  uint64_t num = value + 1;
  while (true) {
    if (isPrime(num)) {
      return num;
    }
    if (num == UINT64_MAX) { // Check for maximum value
      return 0;
    }
    ++num;
  }
}

uint64_t getSumOfPrimes(uint64_t hbound) {
  if (hbound <= 2) {
    return 0;
  }

  uint64_t sum = 2; // Start with 2 as it's the first prime number
  for (uint64_t i = 3; i < hbound; i += 2) { // Check only odd numbers
    if (isPrime(i)) {
      if (sum > UINT64_MAX - i) { // Check for sum overflow
        return 0;
      }
      sum += i;
    }
  }

  return sum;
}
