#include<iostream>
#include<vector>
using namespace std;

// O(n^2)
// vector<int> twoSum(vector<int>& nums, int target) {
//     vector<int> ans;
//     for(int i=0; i<nums.size(); i++){
//         for(int j=0; j<nums.size(); j++){
//             if(i==j) continue;
//             if(nums[i]+nums[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 break;
//             }  
//         }
//     }
//     return ans;
// }

//O(n^2)
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++)
        if(nums[i]+nums[j]==target){
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
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