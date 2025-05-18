#include<iostream>
using namespace std;

/*
To get the power of the number in O(logn) time complexity
*/

int main()
{
    int power, num;

    cout << "Enter the number: ";
    cin >> num;

    cout << "Enter the power: ";
    cin >> power;

    int binary = power;
    double ans = 1;
    double x = num;
    if (power < 0){
        x = 1.0/num;
        binary = -binary;
    }

    while(binary > 0){
        if (binary%2 == 1)
            ans *= x;
        x  *= x;
        binary /= 2;
    }

    cout << "The power is: " << ans << endl;

    return 0;
}