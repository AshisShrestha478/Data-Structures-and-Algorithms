#include<iostream>
using namespace std;

/*
a = 4 and b = 8 first convert to binary

Then do the & operation

*/

int main()
{
    int a = 4, b = 8;

    cout << (a&b) << endl;
    cout << (a|b) << endl;
    cout << (a^b) << endl;
    cout << (a<<1) << endl;

    cout << (6&10) << endl;
    cout << (6|10) << endl;
    cout << (6^10) << endl;
    cout << (10<<2) << endl;        // Equivalent to a*2^b =  40
    cout << (10>>1) << endl;        // Equivalent to a/2^b = 5

    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(long long int) << endl;

    unsigned int x = -10;       // Only stores +ve value so no conversion

    cout << x << endl;

    return 0;

}