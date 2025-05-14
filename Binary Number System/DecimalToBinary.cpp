#include<iostream>
using namespace std;

// To Convert Decimal Number to Binary

int main()
{
    int num;
    int ans = 0;
    int reminder = 0;
    int power = 1;
    cout << "Enter any number: ";
    cin >> num;

    cout << "Decimal: " << num << endl;

    while(num!=0)
    {
        reminder = num % 2;
        num = num / 2;
        ans = (reminder*power) + ans;
        power = power*10;
    }

    cout << "Binary: " << ans << endl;

    return 0;

}