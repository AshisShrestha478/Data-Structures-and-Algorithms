#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
The time complexity of this program is O(nlogn)
*/

int main()
{
    vector<int> nums ={2,0,2,1,1,0};
    
    sort(nums.begin(),nums.end());

    for(int val: nums)
    {
        cout << val << " ";
    }

    return 0;
}