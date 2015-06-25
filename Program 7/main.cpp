/*
 By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 
 What is the 10 001st prime number?
 
 Created by: Robert Schmicker
 Date: 6/25/15
 */

#include <iostream>
#include "math.h"

using namespace std;

bool isPrime(long n);

int main(int argc, const char * argv[]) {
    int counter = 0;
    
    for(long i = 0;;i++){
        if(isPrime(i)==true){
            counter++;
            if(counter==10001){
                cout<<i;
                break;
            }
        }
    }
    
    return 0;
}

bool isPrime(long n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    if (n < 9) return true;
    if (n % 3 == 0) return false;
    long max = (long)(sqrt(n + 0.0)) + 1;
    for (int i = 5; i <= max; i += 6) {
        if (n % i == 0) return false;
        if (n % (i + 2) == 0) return false;
    }
    return true;
}
