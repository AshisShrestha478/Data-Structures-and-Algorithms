#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec = {4,1,2,2,1};
    int ans = 0;

    for (int val: vec)
    {
        ans ^= val;
    }

    cout << ans << endl;
    
    return 0;
}