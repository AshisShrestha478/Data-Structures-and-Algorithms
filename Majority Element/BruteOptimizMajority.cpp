#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
This is still brute force but still 
The time complexity of this program is:
O(nlogn)
*/

int main()
{
    vector<int> vec = {1,2,2,2,1};
    sort(vec.begin(), vec.end());

    // My Way of doing it

    // int freq = 0;
    // int ans = vec.front();
    // int n = (vec.size()/2);

    // for (int val: vec){
    //     if (val == ans)
    //         freq++;
    //     else{
    //         freq = 1;
    //         ans = val;
    //     }
    //     if (freq > n){
    //         cout << ans;
    //         break;
    //     }
    // }

    // Other way of doing it

    int freq = 1, ans = vec[0];
    for (int i=1; i<vec.size(); i++)
    {
        if(vec[i] == vec[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = vec[i];
        }
        if (freq > (vec.size()/2))
        {
            cout << ans;
            break;
        }
    }


    return 0;
}