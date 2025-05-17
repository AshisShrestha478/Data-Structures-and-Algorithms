#include<iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[size] = {1,2,2,1,1};
    int frequency = size/2;

    for (int i=0; i<size; i++)
    {
        int count = 0;
        for (int j=0; j<size; j++)
        {
            if (arr[i] == arr[j]){
                count++;
            }
        }
        if (count > frequency)
        {
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
}