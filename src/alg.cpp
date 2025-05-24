// Copyright 2025 UNN-CS

#include "alg.h"
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
      ++count;
    }
    if (count < n) {
      if (num == UINT64_MAX) {
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

  if (value == UINT64_MAX) {
    return 0;
  }

  uint64_t num = value + 1;
  while (true) {
    if (isPrime(num)) {
      return num;
    }
    if (num == UINT64_MAX) {
      return 0;
    }
    ++num;
  }
}

uint64_t getSumOfPrimes(uint64_t hbound) {
  if (hbound <= 2) {
    return 0;
  }

  uint64_t sum = 2;
  for (uint64_t i = 3; i < hbound; i += 2) {
    if (isPrime(i)) {
      sum += i;
    }
  }

  return sum;
}
