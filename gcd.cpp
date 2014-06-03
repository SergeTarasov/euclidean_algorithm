#include "gcd.h"

#include <iostream>

//Extended Euclidean algorithm
int pgcd (int a, int b, int & x, int & y)
{

    if (a == 0)
    {
        x = 0, y = 1;
        return b;
    }

    int x1, y1;
    int d = pgcd (b%a, a, x1, y1);

    x = y1 - (b / a) * x1;
    y = x1;

    return d;
}

//Euclidean algorithm:
//GCD - Greatest Common Divisor
int gcd (int a, int b)
{

    if (b == 0) return a;

    else return gcd (b, a % b);
}

//Lowest common denominator
int lcd (int a, int b)
{
    return a / gcd (a, b) * b;
}

//binary raising to power
int binpow (int a, int n)
{

    int res = 1;

    while (n)
        if (n & 1)
        {
            res *= a;
            --n;
        }
        else
        {
            a *= a;
            n >>= 1;
        }

    return res;
}
