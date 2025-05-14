#include<iostream>
using namespace std;

/***************************************

This is a program to Reverse a integer
like 123 to 321

****************************************/

int main()
{
    int num;
    int ans = 0;
    int reminder = 0;

    cout << "Enter the number to reverse: ";
    cin >> num;

    cout << "Number: " << num << endl;

    while(num > 0)
    {
        reminder = num % 10;
        ans = ans*10 + reminder;
        num /= 10;
    }

    cout << "Reversed: " << ans << endl;

    return 0;

}