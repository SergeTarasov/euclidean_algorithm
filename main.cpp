#include "gcd.h"
#include "gcd.cpp"
#include <iostream>
using namespace std;
int main()
{
    int a, b, x, y;

    cin >> a >> b;
//out of gcd() - euclidean algorithm
    cout << "out of gcd() - euclidean algorithm:" << endl;
    cout << gcd (a, b) << endl;
//out of pgcd() - extended algorithm
    cout << "out of pgcd() - extended euclidean algorithm:" << endl;
    cout << pgcd (a, b,  x,  y) << endl;
    cout << x << endl;
    cout << y << endl;
//out of lcd() - lowest common denominator for a & b
    cout << "out of lcd) - lowest common denominator for a and b:" << endl;
    cout << lcd (a, b) << endl;
//out of binpow() - binary powered for a,b
    cout <<"out of binpow() - binary raising to a power (a^b):" << endl;
    cout << binpow (a, b) << endl;
    return 0;
}
