#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix= {{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; 
    int rows = matrix.size();
    int colums = matrix[0].size();

    cout << rows << " " << colums << endl;

    return 0;
}