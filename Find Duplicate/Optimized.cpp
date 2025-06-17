#include<iostream>
#include<vector>
using namespace std;

//Time Complexity: O(n) 
//Space Complexity: O(1)
int findDuplicate(vector<int>& nums)
{
    int slow=nums[0], fast=nums[0];

    do{
        slow=nums[slow];
        fast=nums[nums[fast]];
    } while(slow!=fast);

    slow=nums[0];

    while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
    }
    return slow;
}

int main()
{
    vector<int> nums = {3,1,3,4,2};

    cout << findDuplicate(nums) << endl;

    return 0;
}