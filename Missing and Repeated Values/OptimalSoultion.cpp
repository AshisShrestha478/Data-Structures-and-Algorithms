#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    vector<int> ans;
    unordered_set<int> s;
    int repeatedVal,missingVal,expSum=0,actualSum=0,size=grid.size();
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            actualSum+=grid[i][j];
            if(s.find(grid[i][j])!=s.end()){
                repeatedVal=grid[i][j];
                ans.push_back(repeatedVal);
            }
            s.insert(grid[i][j]);
        }
    }
    expSum = ((size*size)*(size*size+1))/2;
    missingVal = expSum+repeatedVal-actualSum;
    ans.push_back(missingVal);
    return ans;      
}

int main()
{
    // vector<vector<int>> vec = {{1,3},{2,2}};
    vector<vector<int>> vec = {{9,1,7},{8,9,2},{3,4,6}};

    vector<int> ans = findMissingAndRepeatedValues(vec);
    for(int val:ans) cout << val << " ";

    return 0;
}