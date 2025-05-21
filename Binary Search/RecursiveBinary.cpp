#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target, int start, int end){

    if (start <= end){
        int mid = start + (end-start)/2;
        if (target > arr[mid])  return binarySearch(arr, target, mid+1, end);
        else if (target < arr[mid])  return binarySearch(arr, target, start, mid -1);
        else  return mid;
    }
    return -1;
}

int main()
{
    vector<int> nums = {-1,0,3,4,5,9,12};
    int start = 0, end = nums.size()-1;

    cout << binarySearch(nums, 3, start, end) << endl;

    return 0;
}