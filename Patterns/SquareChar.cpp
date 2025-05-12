#include<iostream>
using namespace std;

/*
Pattern Wanted
A B C
D E F
G H I

*/
int main()
{
    int num;
    cout << "Enter any number for outer loop: ";
    cin >> num;
    char alphabet = 'A';

    for (int i=0; i<num; i++)
    {
        for (int j=0; j<num; j++)
        {
            cout << alphabet << " ";
            alphabet = alphabet + 1;
        }
        cout << endl;
    }

    return 0;
}
