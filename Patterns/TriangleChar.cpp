#include<iostream>
using namespace std;

/*
Pattern Wanted
A 
B B
C C C

*/
int main()
{
    int num;
    cout << "Enter any number for outer loop: ";
    cin >> num;
    char alphabet = 'A';
    
    for (int i=0; i<num; i++)
    {

        for (int j=0; j<i+1; j++)
        {
            cout << alphabet << " ";
        }
        cout << endl;
        alphabet = alphabet + 1;
    }

    return 0;
}
