#include "alg.h"

bool isNumberPrime(uint64_t number) {
    if (number <= 1) {
        return false;
    }
    
    for (uint64_t divisor = 2; divisor * divisor <= number; ++divisor) {
        if (number % divisor == 0) {
            return false;
        }
    }
    return true;
}

uint64_t findNthPrime(uint64_t position) {
    if (position == 0) {
        return 0;
    }

    uint64_t primeCount = 0;
    uint64_t currentNumber = 2;

    while (primeCount < position) {
        if (isNumberPrime(currentNumber)) {
            primeCount++;
        }
        if (primeCount < position) {
            currentNumber++;
        }
    }

    return currentNumber;
}

uint64_t findNextPrimeNumber(uint64_t current) {
    uint64_t nextNumber = current + 1;
    
    while (!isNumberPrime(nextNumber)) {
        nextNumber++;
    }
    
    return nextNumber;
}

uint64_t calculatePrimesSum(uint64_t upperBound) {
    uint64_t totalSum = 0;
    
    for (uint64_t number = 2; number < upperBound; ++number) {
        if (isNumberPrime(number)) {
            totalSum += number;
        }
    }
    
    return totalSum;
} 