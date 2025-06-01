#include<iostream>
#include<deque>
using namespace std;

int main()
{
    // deque<int> l = {1,2,3,4};
    deque<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);

    l.pop_back();
    l.pop_front();

    for(int val: l) cout << val << " ";

    return 0;
}