#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Initilization of Vector
    // vector<int> vec; //0
    // vector<int> vec = {1,2,3}; //3
    // vector<int> vec(5,0);

    // for (int i: vec)
    // {
    //     cout << i << " ";
    // }

    // cout << endl;

    // vector<char> letter = {'a','b','c','d','e'};
    // for (char val: letter)
    // {
    //     cout << val << " ";
    // }

    // cout << endl;

    // Vector Functions

    // cout << letter.size() << endl;
    // letter.push_back('f');
    // cout << letter.size() << endl;
    // letter.pop_back();
    // cout << letter.size() << endl;
    // cout << letter.front() << endl;
    // cout << letter.back() << endl;

    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    return 0;
} 