#include<iostream>
using namespace std;

// O(n^2)
// int diagonalSum(int m[][3],int n)
// {
//     int sum=0;

//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             if(i==j) sum+=m[i][j];
//             else if(j==n-i-1) sum +=m[i][j];
//         }
//     }
//     return sum;
// }

//O(n)
int diagonalSum(int m[][3],int n)
{
    int sum=0;

    for(int i=0; i<n; i++)
    {
        sum+=m[i][i];
        if(i!=n-i-1) sum+=m[i][n-i-1];
    }
    return sum;
}



int main()
{
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;

    cout << diagonalSum(matrix,n) << endl;

    return 0;
}