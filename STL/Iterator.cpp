#include<iostream>
#include<vector>
using namespace std;

/*
This is how iterators works
*/

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9};

    // vector<int>::iterator it;
    // for (it = arr.begin(); it!=arr.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }

    // vector<int>::reverse_iterator it;
    // for (it = arr.rbegin(); it!=arr.rend(); it++)
    // {
    //     cout << *(it) << " ";
    // }

    /*
    The below code is the shortcut of the above code.arr
    Auto will automatically recognize the type
    */

    // for (auto it = arr.begin(); it!=arr.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }

    // for (auto it = arr.rbegin(); it!=arr.rend(); it++)
    // {
    //     cout << *(it) << " ";
    // }

    return 0;
}