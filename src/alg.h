#ifndef ALG_H
#define ALG_H

#include <cstdint>

bool isNumberPrime(uint64_t number);
uint64_t findNthPrime(uint64_t position);
uint64_t findNextPrimeNumber(uint64_t current);
uint64_t calculatePrimesSum(uint64_t upperBound);

#endif // ALG_H 