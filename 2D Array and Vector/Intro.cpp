#include<iostream>
using namespace std;

bool linearSearch(int m[][3],int rows,int colums, int key)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<colums; j++)
        {
            if(m[i][j]==key) return true;
        }
    }
    return false;
}   

int main()
{
    // int matrix[4][3]; //2d array
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; 
    int rows = 4;
    int colums = 3;
    int key=8;

    cout << linearSearch(matrix,rows,colums,key) << endl; 

    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<colums; j++)
    //     {
    //         cout << matrix[i][j] << " "; 
    //     }
    //     cout << endl;
    // }

    return 0;
}