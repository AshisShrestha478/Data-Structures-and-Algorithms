#include<iostream>
using namespace std;

// To Convert Binary Number to Decimal

int main()
{
    int num;
    int ans = 0;
    int reminder = 0;
    int power = 1;
    cout << "Enter any number: ";
    cin >> num;

    cout << "Binary: " << num << endl;

    while(num!=0)
    {
        reminder = num % 10;
        num = num / 10;
        ans = (reminder*power) + ans;
        power = power*2;
    }

    cout << "Decimal: " << ans << endl;

    return 0;

}