#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int start = 0, end = arr.size()-1;

    while(start<=end){
        int mid = start + (end-start)/2;
        if (target > arr[mid])  start = mid + 1;
        else if (target < arr[mid])  end = mid - 1;
        else  return mid;
    }
    return -1;
}

int main()
{
    vector<int> nums = {-1,0,3,4,5,9,12};

    cout << binarySearch(nums, 3) << endl;

    return 0;
}