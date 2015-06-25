/*
 
 The sum of the squares of the first ten natural numbers is,
 
 1^2 + 2^2 + ... + 10^2 = 385
 The square of the sum of the first ten natural numbers is,
 
 (1 + 2 + ... + 10)^2 = 552 = 3025
 Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
 
 Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 
 Created by: Robert Schmicker
 Date: 6/25/15
 
 */

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int sum_of_squares = 0;
    int square_of_sum = 0;
    int temp = 0;
    
    for(int i = 1; i < 101; i++){
        sum_of_squares += pow(i, 2);
    }
    
    for(int j = 1; j < 101; j++){
        temp += j;
    }
    
    square_of_sum = pow(temp, 2);
    
    cout<<square_of_sum - sum_of_squares;
    
    return 0;
}
