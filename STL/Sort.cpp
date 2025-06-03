#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comparator(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}

int main()
{
    // int arr[5] = {2,5,1,3,4};

    // sort(arr, arr+5);

    // for (int i=0; i<5; i++) cout << arr[i] << endl;

    // vector<int> v= {2,5,1,3,4};

    // sort(v.begin(),v.end());

    // for (int val: v) cout << val << endl;

    // vector<int> v= {2,5,1,3,4};

    // sort(v.begin(),v.end(), greater<int>());

    // for (int val: v) cout << val << endl;

    // Sort this as per the first value of pair
    // vector<pair<int,int>> v= {{5,3},{2,1},{8,9}};

    // sort(v.begin(),v.end());

    // for (auto val: v) cout << val.first << val.second << endl;


    // Making custome comperator


    vector<pair<int,int>> v= {{8,9},{5,3},{2,1}};

    sort(v.begin(),v.end(),comparator);

    for (auto val: v) cout << val.first << val.second << endl;

    return 0;
}