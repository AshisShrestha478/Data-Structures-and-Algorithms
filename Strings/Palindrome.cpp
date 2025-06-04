#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool palindromeCheck(string str)
{
    string real = str;
    reverse(str.begin(), str.end());

    return (real==str);
}

int main()
{
    // string name = "hero";
    string name = "madam";

    if(palindromeCheck(name)){
        cout << "The name is Palindrome";
    }
    else cout << "The name is not Palindrome";

    return 0; 
}