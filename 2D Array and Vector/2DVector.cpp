#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> matrix = {{1,2,3},{4,5,6,10,11},{7,8,9}};

    // row = matrix.size()
    // col = matrix[i].size()

    for(int i=0; i<matrix.size(); i++)
    {
        for(int j=0; j<matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << matrix[1][3] << endl;
    cout << matrix[1][4] << endl;

    return 0;
}