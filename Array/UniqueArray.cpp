#include<iostream>
using namespace std;

/*
Find unique Array number
*/


int main()
{
    int size = 10;
    int arr[size] = {1,2,3,1,2,3,4,5,6,2};

    for (int i=0; i<size; i++)
    {
        int iCount = 0;
        for (int j=0; j<size; j++)
        {
            if (i==j) continue;

            if (arr[i] == arr[j])
            {
                iCount++;
            }
        }

        if (iCount == 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}