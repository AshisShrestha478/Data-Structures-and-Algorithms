#include<iostream>
#include<vector>
using namespace std;

/*
The time complexity of this program is O(n)
*/

int main()
{
    vector<int> nums ={2,0,2,1,1,0};
    vector<int> arr(6,0);
    
    int count0=0,count1=0,count2=0,index=0;

    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i]==0)count0++;
        else if (nums[i]==1) count1++;
        else count2++;
    } 
    for(int i=0; i<count0; i++){
        arr[index] = 0;
        index++;
    }
    for(int i=0; i<count1; i++){
        arr[index] = 1;
        index++;
    }
    for(int i=0; i<count2; i++){
        arr[index] = 2;
        index++;
    }

    for(int val: arr)
    {
        cout << val << " ";
    }

    return 0;
}