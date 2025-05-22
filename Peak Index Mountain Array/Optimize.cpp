#include<iostream>
#include<vector>
using namespace std;

/*
This is code has time complexity of O(logn)
*/

int peakMountain(vector<int> arr)
{
    // Since out peak cannot be first or last element
    // We can start from 1 and end to size-2
    int start = 1, end = arr.size()-2;
    while(start<=end)
    {
        int start=1, end=arr.size()-2;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
            else if(arr[mid]>arr[mid-1]) start=mid+1;
            else end=mid-1;
        }
        return -1;
    }
    return -1;
}

int main()
{
    vector<int> nums = {24,69,100,99,79,78,67,36,26,19};

    cout << peakMountain(nums) << endl;

    return 0;
}