#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec = {1,2,2,1,1};
    int freq = 0;
    int ans = 0;

    for (int i=0; i<vec.size(); i++)
    {
        if (freq == 0)
            ans = vec[i];
        if(ans == vec[i])
            freq++;
        else
            freq--;
    }

    cout << "This highest frequency is: " << ans;
    cout << endl;

    return 0;
}