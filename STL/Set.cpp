#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main()
{
    // set<int> s;

    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);

    // cout << *(s.lower_bound(4)) << endl; //4
    // cout << *(s.upper_bound(4)) << endl; //5
    // for(auto val: s) cout << val << " ";

    // multiset<int> s;

    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);

    // for(auto val: s) cout << val << " ";


    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for(auto val: s) cout << val << " ";

    return 0;
}