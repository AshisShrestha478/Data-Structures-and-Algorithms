#include<iostream>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;

// bool validPalindrome(string s)
// {
//     string cleaned;

//     for (char c: s){
//         if(isalnum(c)) cleaned += tolower(c);
//     }

//     if(cleaned.size()==0) return true;

//     string dup = cleaned;
//     reverse(dup.begin(), dup.end());

//     return dup == cleaned;
// }

bool isPalindrome(string s) {
    int start=0, end=s.size()-1;
    while(start<end){
        if(!isalnum(s[start])){
            start++; continue;
        }
        if(!isalnum(s[end])){
            end--; continue;
        }
        if(tolower(s[start]) != tolower(s[end])) return false;
        start++; end--;
    }
    return true;
}

int main()
{
    string word = "A man, a plan, a canal: Panama";
    // string word = "race a car";
    // string word = " ";

    // if(validPalindrome(word)) cout << "It is valid Palindrome.";
    // else cout << "It is not valid Palindrome";

    if(isPalindrome(word)) cout << "It is valid Palindrome.";
    else cout << "It is not valid Palindrome";

    return 0;
}