#include<iostream>
using namespace std;

/*
Pattern Wanted
1
21
321

*/
int main()
{
    int num;
    cout << "Enter any number for outer loop: ";
    cin >> num;

    for (int i=0; i<num; i++)
    {
        for (int j=i+1; j>0; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
