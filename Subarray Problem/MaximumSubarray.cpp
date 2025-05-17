#include<iostream>
using namespace std;

int main()
{
    int size = 7;
    int arr[size] = {3,-4,5,4,-1,7,-8};
    int greatest = INT_MIN;
    int sum =0;

    // My brute force Logic which is O(n^3)

    // for (int sta=0; sta<size; sta++)
    // {
    //     for (int end=sta; end<size; end++)
    //     {
    //         sum = 0;
    //         for (int i=sta; i<=end; i++)
    //         {
    //             sum += arr[i];
    //         }
    //         if(sum > greatest)
    //         {
    //             greatest = sum;
    //         }
    //     }
    //     cout << endl;
    // }

    // The logic that I Learned which give O(n^2) still brute froce

    // for (int sta=0; sta<size; sta++)
    // {   
    //     int currSum = 0;
    //     for (int end=sta; end<size; end++)
    //     {
    //         currSum += arr[end];
    //         greatest = max(currSum, greatest);
    //     }
    // }

    // cout << "The greatest sum of subarrays is: " << greatest << endl;

    return 0;
}