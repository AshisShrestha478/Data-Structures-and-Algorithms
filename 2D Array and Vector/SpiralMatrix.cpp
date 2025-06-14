#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int startRow=0,startColumn=0,endRow=matrix.size()-1,endColumn=matrix[0].size()-1;
    vector<int> newMatrix;

    /* 
        <= is used since in odd matrix we can have
        our start and end rows or columns overlap
        at some point
    */
    while(startRow<=endRow && startColumn<=endColumn){
        // Top Element
        for(int i=startColumn; i<=endColumn; i++)
            newMatrix.push_back(matrix[startRow][i]);
        // Right Element
        for(int j=startRow+1; j<=endRow; j++)
            newMatrix.push_back(matrix[j][endColumn]);
        // Bottom Element
        for(int i=endColumn-1; i>=startColumn; i--){
            // Edge Case for odd number of Rows
            if(startRow==endRow) break;
            newMatrix.push_back(matrix[endRow][i]);
        }
        // Left Element
        for(int j=endRow-1; j>=startRow+1; j--){
            // Edge Case for odd number of Columns
            if(startColumn==endColumn) break;
            newMatrix.push_back(matrix[j][startColumn]);  
        }
        // Changing the Boundries
        startRow++,startColumn++;
        endRow--,endColumn--;
    }
    return newMatrix;
}

int main()
{
    vector<vector<int>> m = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    vector<int> newMatrix = spiralOrder(m);

    for (int val:newMatrix) cout << val << " ";

    return 0;
}