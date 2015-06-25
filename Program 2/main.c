//
//  main.c
//  Program 2
//
//  Created by Robert Schmicker on 6/23/15.
//  Copyright (c) 2015 Robert Schmicker. All rights reserved.
//  Even Fibonacci numbers

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int max = 4000000;
    int sum=0;
    int first=1;
    int second=1;
    
    while(second<max){
        first+=second;
        second+=first;
        if((first%2==0)&&(first<max))
            sum+=first;
        else if((second%2==0)&&(second<max))
            sum+=second;
    }
    
    printf("%d", sum);
    return 0;
}
