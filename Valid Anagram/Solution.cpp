#include <iostream>
#include <unordered_map>
#include <string>
#include<algorithm>
using namespace std;

// bool isAnagram(string s, string t)
// {
//     sort(s.begin(),s.end());
//     sort(t.begin(),t.end());

//     return s==t;
// }


// This is the optimal solution which uses Hash Map
bool isAnagram(string s, string t)
{
    unordered_map<char, int> first, second;
    if (s.length() != t.length())
        return false;
    for (int i = 0; i < s.size(); i++)
    {
        first[s[i]]++;
        second[t[i]]++;
    }
    if (first == second)
        return true;
    else
        return false;
}

int main()
{
    string s,t;
    // s = "anagram";
    // t = "nagaram";
    s = "anagrama";
    t = "nagaram";
    // s = "jar";
    // t = "jam";

    if(isAnagram(s,t)) cout << "It is a Valid Anagram";
    else cout << "It is not a Valid Anagram";

    return 0;
}