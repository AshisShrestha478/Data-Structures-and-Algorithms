#include<iostream>
#include<vector>
using namespace std;

// O(n*m)
// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//     for(int i=0; i<matrix.size(); i++){
//         for(int j=0; j<matrix[i].size(); j++){
//             if(matrix[i][j]==target) return true;
//         }
//     }
//     return false;
// }

//O(log(m*n))
bool searchCol(vector<vector<int>>& m, int target, int rowRange)
{
    int start=0,end=m[0].size()-1;
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if(target==m[rowRange][mid]) return true;
        else if(target>m[rowRange][mid]) start=mid+1;
        else end=mid-1;
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row=matrix.size(), col=matrix[0].size();
    int startRow=0,endRow=row-1;

    while(startRow<=endRow){
        int midRow =startRow+(endRow-startRow)/2;
        if(target>=matrix[midRow][0] && target<= matrix[midRow][col-1]) return searchCol(matrix,target,midRow);
        else if(target>matrix[midRow][col-1]) startRow=midRow+1;
        else endRow=midRow-1;
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;

    if (searchMatrix(matrix, target)) cout << "Target Found" << endl;
    else cout << "Target Not Found" << endl;

    return 0;
}