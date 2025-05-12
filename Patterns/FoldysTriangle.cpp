#include<iostream>
using namespace std;

/*
Pattern Wanted
1
23
456

*/
int main()
{
    int num;
    cout << "Enter any number for outer loop: ";
    cin >> num;

    int iNum = 1;

    for (int i=0; i<num; i++)
    {
        for (int j=0; j<i+1; j++)
        {
            cout << iNum;
            iNum++;
        }
        cout << endl;
    }

    return 0;
}
