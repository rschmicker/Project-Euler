//
//  main.c
//  Project Euler_Program 1
//
//  Created by Robert Schmicker on 6/23/15.
//  Copyright (c) 2015 Robert Schmicker. All rights reserved.
//  Multiples of 3 and 5

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int cap = 1000;
    int total = 0;
    int i = 1;
    for(; i < cap; i++){
        if(i%3==0 || i%5==0){
            total += i;
        }
    }
    printf("%i", total);
    return 0;
}
