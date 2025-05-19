#include<iostream>
#include<vector>
using namespace std;

/*
This is the product of array except self
The time complexity of this is O(n)
*/

int main()
{
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    vector<int> ans(n,1);

    for (int i=1; i<n; i++)
    {
        ans[i] = ans[i-1]*nums[i-1];
    }

    int right = 1;
    for (int j = n - 1; j >= 0; j--) {
        ans[j] *= right;
        right *= nums[j];
    }
    
    for(int val: ans) cout << val << " ";

    return 0;
}