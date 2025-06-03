#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // This one is for largest to smallest
    // priority_queue<int> s;

    // This one is for smallest to largest
    priority_queue<int,vector<int>,greater<int>> s;

    s.push(5);
    s.push(2);
    s.push(10);
    s.push(4);
    
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}