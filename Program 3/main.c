/*
 The prime factors of 13195 are 5, 7, 13 and 29.
 
 What is the largest prime factor of the number 600851475143 ?
 
 Created by: Robert Schmicker
 Date: 6/23/15
 */

#include <stdio.h>

int isPrime(long long int n);
long long int findLargestPrimeFactor(long long int n);

int main(int argc, const char * argv[]) {
    printf("%lld", findLargestPrimeFactor(600851475143));
    return 0;
}

int isPrime(long long int n)
{
    long long int i;
    for(i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;
}

long long int findLargestPrimeFactor(long long int n)
{
    long long int counter=2;
    while(n!=1)
    {
        if(isPrime(n))
            return n;
        while(n%counter==0)
            n/=counter;
        counter++;
    }
    return counter-1;
}
