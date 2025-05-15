#include<iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[size] = {5, 15, 22, 1, -15, 24};

    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for (int i=0; i<size; i++)
    {
        // if (arr[i] < smallest)
        // {
        //     smallest = arr[i];
        // }
        
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }

    cout << "The Largest value is: " << largest << endl;
    cout << "The Smallest value is: " << smallest << endl;

    return 0;
}