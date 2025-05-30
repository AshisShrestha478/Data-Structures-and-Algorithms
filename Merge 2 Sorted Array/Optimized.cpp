#include<iostream>
#include<vector>
using namespace std;

/*
The time complexity of this program is O(n+m)
and it has constant space complexity O(1)
*/


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    int index=m+n-1,nums1Index=m-1,nums2Index=n-1;
    while(nums1Index>=0 && nums2Index>=0){
        if(nums1[nums1Index]>=nums2[nums2Index]){
            nums1[index--]=nums1[nums1Index--];
        }
        else{
            nums1[index--]=nums2[nums2Index--];
        }
    }
}

int main()
{
    vector<int> nums1 = {1,2,3,0,0,0}, nums2={2,5,6};
    int m=3,n=3;

    merge(nums1,m,nums2,n);

    for (int vals: nums1){
        cout << vals << " ";
    }

    return 0; 
}