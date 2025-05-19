#include<iostream>
using namespace std;

/*
We use two pointer approach here
This is optimal approach
The time complexity is O(n)
*/

int main()
{
    int size = 9;
    int arr[size] = {1,8,6,2,5,4,8,3,7};
    int left = 0, right = size -1;
    int height, width, maxArea = 0;

    while(left!=right){
        height = right - left;
        width = min(arr[left], arr[right]);
        maxArea = max(maxArea, height*width);

        arr[left] < arr[right] ? left++ : right--;
    }

    cout << "The max area is: " << maxArea << endl;

    return 0;
}