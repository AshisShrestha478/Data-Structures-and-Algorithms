#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& vec)
{
    int first = 0;
    int last = vec.size() - 1;

    while (first != last)
    {
        int temp = first;
        vec[first] = vec[last];
        vec[last] = vec[temp];
        first++;
        last--;
    }
}

int main()
{
    vector<int> vec = {4,2,7,8,1,2,5};

    reverse(vec);

    for (int val: vec)
    {
        cout << val << " ";
    }


    return 0;
}