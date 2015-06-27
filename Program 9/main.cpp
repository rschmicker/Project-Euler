/*
 
 A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 
 a^2 + b^2 = c^2
 For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
 
 There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 Find the product abc.
 
 Created by: Robert Schmicker
 Date: 6/26/15
 */

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int a, b, c, m, n, k;
    a = 0;  b = 0;  c = 0;
    m = 0;  n = 0;  k = 0;
    int sum = 0;
    int product = 0;
    
    for (n = 2; n < 1000; n++)
    {
        for (m = n + 1; m < 1000; m++)
        {
            sum = 0;
            a = (m*m - n*n);
            b = (2*m*n);
            c = (m*m + n*n);
            sum = a + b + c;
            if(1000 % sum == 0)
            {
                int k = 1000 / sum;
                a *= k;
                b *= k;
                c *= k;
                goto done;
            }
        }
    }
done:
    product = a * b * c;
    cout<<product;
    
    return 0;
}