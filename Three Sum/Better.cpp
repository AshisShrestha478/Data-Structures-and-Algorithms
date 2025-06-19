#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std;

// Time Complexity O(n^2)
// Space Complexity O(n)
vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    set<vector<int>> st;

    for (int i = 0; i < n; ++i) {
        unordered_set<int> hashSet;
        for (int j = i + 1; j < n; ++j) {
            int third = -(nums[i] + nums[j]);
            if (hashSet.count(third)) {
                vector<int> temp = {nums[i], nums[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashSet.insert(nums[j]);
        }
    }

    return vector<vector<int>>(st.begin(), st.end());
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