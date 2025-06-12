#include<iostream>
using namespace std;

int maxSum(int m[][3],int row,int column)
{
    int highSum=INT_MIN,currSum;
    for(int i=0; i<row; i++){
        currSum=0;
        for(int j=0; j<column; j++)
        {
            currSum+=m[i][j];
        }
        highSum = max(highSum,currSum);
    }
    return highSum;
}

int main()
{
    int row=3,column=3;
    int martix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    cout << maxSum(martix,row,column) << endl;

    return 0;
}