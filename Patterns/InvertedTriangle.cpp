#include<iostream>
using namespace std;

/*
Pattern Wanted
AAAA
 BBB
  CC
   D
*/

int main()
{
    int num;
    cout << "Enter any number for outer loop: ";
    cin >> num;

    char alpha = 'A';

    for (int i=0; i<num; i++)
    {
        // To Print Spaces
        for (int j=0; j<i; j++)
        {
            cout << " ";
        }

        // To Print Char
        for (int k=0; k<num-i; k++)
        {
            cout << alpha;
        }
        alpha++;
        cout << endl;
    }

    return 0;
}
