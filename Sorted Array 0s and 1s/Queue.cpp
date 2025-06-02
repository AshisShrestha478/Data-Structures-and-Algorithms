#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> s;
    queue<int> s2;

    s.push(1);
    s.push(3);
    s.push(2);

    s2.swap(s);
    cout << s.size() << endl;
    cout << s2.size() << endl;

    // queue<int> s;

    // s.push(1);
    // s.push(3);
    // s.push(2);
    
    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }

    return 0;
}