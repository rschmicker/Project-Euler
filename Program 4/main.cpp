/*
 
 A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 
 Find the largest palindrome made from the product of two 3-digit numbers.
 
 
 Created by: Robert Schmicker
 Date: June 24 2015
 */

#include <iostream>
#include <vector>

using namespace std;

int isPal(int num);

int main(int argc, const char * argv[]) {
    
    std::vector< int > arr;
    
    for(int j = 999; j > 100; j--){
        for(int k = 999; k > 100; k--){
            int num = j*k;
            if(isPal(num) == 1){
                arr.push_back(num);
            }
        }
    }
    cout<<*max_element(arr.begin(), arr.end());
}

int isPal(int num){
    string numstr = to_string(num);
    int counter=0;
    for(int i = 0; i < numstr.length(); i++){
        if(numstr.at(i)==(numstr[numstr.length()-(i+1)])){
            counter++;
        }
    }
    if(counter == numstr.length()){
        return 1;
    }
    else{
        return -1;
    }
}

