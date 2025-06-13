#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& m, int target)
{
    int row=0,column=m[0].size()-1;
    while(row<m.size() && column>=0){
        if(target==m[row][column]) return true;
        else if(target>m[row][column]) row++;
        else column--;
    }
    return false;    
}

int main()
{
    // vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    // int target = 5;
    int target = 20;

    if (searchMatrix(matrix, target)) cout << "Target Found" << endl;
    else cout << "Target Not Found" << endl;

    return 0;
}