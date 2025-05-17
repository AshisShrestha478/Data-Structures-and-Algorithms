
#include<iostream>
using namespace std;

int main()
{
    int size = 7;
    int arr[size] = {3,-4,5,4,-1,7,-8};
    // int arr[size] = {-3,-4,-5,-4,-1,-7,-8};
    int maxSum = INT_MIN;
    int currMax =0;

    for(int i=0; i<size; i++)
    {
        currMax += arr[i];
        maxSum = max(currMax, maxSum);

        if (currMax < 0)
        {
            currMax = 0;
        }
    }

    cout << "Max Sum of subarray: " << maxSum;

    return 0;
}