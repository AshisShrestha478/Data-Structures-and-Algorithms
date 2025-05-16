#include<iostream>
#include<vector>
using namespace std;

/*
This is a linear search using vector
*/

int main()
{
    vector<int> vec = {4,1,2,2,1};
    int traget = 4;
    bool isFound = false;

    for (int val: vec)
    {
        if  (val == traget) isFound = true;
    }

    if (isFound)
        cout << "The traget is found." << endl;
    else
        cout << "The target is not found." << endl;

    return 0;
}