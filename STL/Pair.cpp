#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // pair<int,int> p ={1,2};
    // cout << p.first << endl;
    // cout << p.second << endl;

    // pair<string,int> p1 ={"Ashis",2};
    // cout << p1.first << endl;
    // cout << p1.second << endl;

    // pair<int,pair<int,int>> p3 ={1,{2,3}};
    // cout << p3.first << endl;
    // cout << p3.second.first << endl;
    // cout << p3.second.second << endl;

    // vector<pair<int,int>> p = {{1,2},{3,4},{5,6}};

    // for (pair<int,int> vals: p)
    // {
    //     cout << vals.first << " " << vals.second << endl;
    // }

    // // The below code is same as above code

    // for (auto vals: p)
    // {
    //     cout << vals.first << " " << vals.second << endl;
    // }

    vector<pair<int,int>> p = {{1,2},{3,4},{5,6}};

    // p.push_back({7,8}); //Insert
    // p.emplace_back(7,8); //in-palace objects create

    // for (pair<int,int> vals: p)
    // {
    //     cout << vals.first << " " << vals.second << endl;
    // }

    return 0;
}