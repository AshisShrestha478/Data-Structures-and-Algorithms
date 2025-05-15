#include<iostream>
using namespace std;

/*
Swap min and max of the array
*/

void swap(int& a , int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int size = 6;
    int arr[size] = {5, 15, 22, 1, -15, 24};

    int smallest_index = 0;
    int largest_index = 0;
    
    for (int i=0; i<size; i++)
    {
        if (arr[i] < smallest_index)
        {
            smallest_index = i;
        }
        if (arr[i] > largest_index)
        {
            largest_index = i;
        }
        
    }

    swap(arr[smallest_index], arr[largest_index]);

    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}