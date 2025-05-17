#include<iostream>
using namespace std;

/*
Subarray Brute Force
*/

int main()
{
    int size = 5;
    int arr[size] = {1,2,3,4,5};

    for (int sta=0; sta<size; sta++)
    {
        for (int end=0; end<size; end++)
        {
            for (int i=sta; i<=end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}