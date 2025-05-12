#include<iostream>
using namespace std;

/*
Pattern Wanted n = 4
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/
int main()
{
    int num;
    cout << "Enter any number for outer loop: ";
    cin >> num;

    for (int i=0; i<num; i++)
    {
        // To Print Top Left
        // For Stars
        for (int j=0; j<i+1; j++)
        {
            cout << "*";
        }

        // For Spaces
        for (int k=0; k<num-i-1; k++)
        {
            cout << " ";
        }

        // To Print Top Right
        // For Spaces;
        for (int j=0; j<num-i-1; j++)
        {
            cout << " ";
        }

        // For Stars
        for (int k=0; k<i+1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i=0; i<num; i++)
    {
        // To Print Bottom Left
        // For Stars
        for (int j=0; j<num-i; j++)
        {
            cout << "*";
        }

        // For Spaces
        for (int k=0; k<i; k++)
        {
            cout << " ";
        }

        // To Prin Bottom Right
        // For Spaces
        for (int j=0; j<i; j++)
        {
            cout << " ";
        }

        // For Stars
        for (int k=0; k<num-i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
