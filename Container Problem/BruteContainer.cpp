#include<iostream>
using namespace std;

/*
This is brute force approach
The time complexity is O(n^2)
*/

int main()
{
    int size = 9;
    int arr[size] = {1,8,6,2,5,4,8,3,7};
    // int size = 2;
    // int arr[size] = {1,1};
    int height, width, maxArea = 0;

    for (int i=0; i<size; i++){
        for (int j=i+1; j<size; j++){
            height = min(arr[i], arr[j]);
            width = j - i;
            maxArea = max(maxArea, height*width);;
        }
    }

    cout << "The max area is: " << maxArea << endl;

    return 0;
}