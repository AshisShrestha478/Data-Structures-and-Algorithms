#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

// O(n^3)
vector<vector<int>> threeSum(vector<int>& nums) {
    set<vector<int>> s;
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            for(int k=j+1; k<nums.size(); k++){
                if(nums[i]+nums[j]+nums[k] == 0){
                    vector<int> triplets = {nums[i],nums[j],nums[k]};
                    sort(triplets.begin(), triplets.end()); // Make sure no dupilcate answer
                    s.insert(triplets); // Used set so that we donot get duplicate answer
                }
            }
        }
    }
    return vector<vector<int>> (s.begin(), s.end());
}

int main()
{
    vector<int> vec = {-1,0,1,2,-1,-4};

    vector<vector<int>> ans = threeSum(vec);
    for (auto row : ans) {
        cout << "[ ";
        for (auto val : row) {
            cout << val << " ";
        }
        cout << "]\n";
    }

    return 0;
}