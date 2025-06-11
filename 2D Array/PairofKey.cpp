#include<iostream>
using namespace std;

pair<int,int> pairGiver(int m[][3],int rows,int colums, int key)
{
    pair<int,int> p = {-1,-1};
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<colums; j++)
        {
            if(m[i][j]==key){
                p = {i,j};
                return p;
            }
        }
    }
    return p;
}

int main()
{
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; 
    int rows = 4;
    int colums = 3;
    int key=8;


    pair<int,int> p = pairGiver(matrix,rows,colums,key);
    cout << p.first << " " << p.second << endl;

    return 0;
}