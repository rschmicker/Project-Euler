/*
 
 The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 
 Find the sum of all the primes below two million.
 
 Created by: Robert Schmicker
 Date: 6/27/15
 */

#include <iostream>

bool isPrime(long long int num);

using namespace std;

int main(int argc, const char * argv[]) {
    long long int total = 0;
    for(int i = 2; i<2000000; i++){
        if(isPrime(i)){
            total+=i;
        }
    }
    cout<<total;
    return 0;
}

bool isPrime(long long int n)
{
    long long int i;
    for(i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
    return true;
}