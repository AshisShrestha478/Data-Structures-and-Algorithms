#include<iostream>
using namespace std;

/*
Swap elements of array using 2 pointer approach
*/

void swap(int& a , int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int size = 7;
    int arr[size] = {4,2,7,8,1,2,5};

    int first = 0;
    int last = size - 1;

    while (first != last)
    {
        swap(arr[first], arr[last]);
        first++;
        last--;
    }
    
    cout << "Reversed array:" << endl;

    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}