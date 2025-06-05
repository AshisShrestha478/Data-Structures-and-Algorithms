#include<iostream>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;

string removeOccurrences(string s, string part) {
    while(s.size()>0 && s.find(part)<s.size()) s.erase(s.find(part),part.size());
    return s;
}

int main()
{
    string word = "efgabcdefghi";
    string part = "efg";

    cout << removeOccurrences(word, part) << endl;

    return 0;
}