#include<iostream>
#include<vector>
using namespace std;

/*
Pair Sum problem using 2 pointer approach
Time complexity will be O(n)
*/

int main()
{
    int size = 4;
    int arr[size] = {2,7,11,15};
    int target = 9;
    vector<int> ans;
    int start = 0;
    int end = size-1;

    while (start!=end)
    {
        if(arr[start]+arr[end] > target)
            end--;
        else if (arr[start]+arr[end] < target)
            start++;
        else{
            ans.push_back(start);
            ans.push_back(end);
            break;
        }
    }

    for (int val: ans)
        cout << val << " ";


    return 0;
}