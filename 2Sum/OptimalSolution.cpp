#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    unordered_map<int,int> m;
    for(int i=0; i<nums.size(); i++){
        int firstValue=nums[i];
        int secondValue=target-firstValue;
        if(m.find(secondValue)!=m.end()){
            ans.push_back(m[secondValue]);
            ans.push_back(i);
            break;
        }
        m[firstValue]=i;
    }
    return ans;
}

int main()
{
    vector<int> vec = {2,15,11,7};
    int target = 9;

    vector<int> ans = twoSum(vec,target);

    for(int val: ans) cout << val << " ";

    return 0;
}