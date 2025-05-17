#include<iostream>
#include<vector>
using namespace std;

/*
Pair Sum problem using brute force
Time complexity will be O(n^2)
*/

int main()
{
    int size = 4;
    int arr[size] = {2,7,11,15};
    int target = 9;
    vector<int> ans;

    for (int i=0; i<size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if (arr[i]+arr[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }

    for (int val: ans)
        cout << val << " ";

    return 0;
}