#include<iostream>
using namespace std;

/*
Swap min and max of the array
*/


int main()
{
    int size = 6;
    int arr1[size] = {5, 15, 22, 1, -15, 24};
    int arr2[size] = {1, 2, 4, 15, 24, 10};

    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }

    return 0;
}