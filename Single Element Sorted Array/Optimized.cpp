#include<iostream>
#include<vector>
using namespace std;

int singleElement(vector<int> nums)
{
        int start=0, end=nums.size()-1;
        if(start==end) return nums[start];
        while(start<=end){
            int mid = start+(end-start)/2;
            if(mid==0 && nums[mid]!=nums[mid+1]) return nums[mid];
            if(mid==nums.size()-1 && nums[mid]!=nums[mid-1]) return nums[mid];
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];
            if(mid%2==0){
                if(nums[mid]==nums[mid-1]) end=mid-1;
                else start=mid+1;
            }
            else{
                if(nums[mid] == nums[mid-1]) start=mid+1;
                else end=mid-1;
            }
        }
        return -1;
}

int main()
{
    // vector<int> nums = {1,1,2,3,3,4,4,8,8};
    // vector<int> nums = {1,2,2};
    vector<int> arr = {1,1,2,2,3,3,4,4,8};
    
    cout << arr[singleElement(arr)] << endl;

    return 0;
}