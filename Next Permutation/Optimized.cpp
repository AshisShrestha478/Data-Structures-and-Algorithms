#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int pivotIndex=-1, size=nums.size();
    for(int i=size-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            pivotIndex=i;
            break;
        }
    }
    if(pivotIndex==-1) {
        reverse(nums.begin(),nums.end());
        return;  
    }
    for(int i=size-1; i>pivotIndex; i--){
        if(nums[i]>nums[pivotIndex]){
            swap(nums[i],nums[pivotIndex]);
            break;
        }
    }
    reverse(nums.begin()+pivotIndex+1,nums.end());
}

int main()
{
    vector<int> arr={1,2,3};
    nextPermutation(arr);
    // next_permutation(arr.begin(), arr.end()); // Shortcut lol using STL

    for (int vals: arr){
        cout << vals << " ";
    }

    return 0;
}
