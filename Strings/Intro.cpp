#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    // char str[] = {'a','b','c','\0'};
    // char str[] = "hello"; // String Literals

    // cout << str << endl;
    // cout << strlen(str) << endl;

    // char str[100];

    // cout << "Enter character array: ";
    // // cin >> str;
    // // cin.getline(str, 100);
    // cin.getline(str, 100, '$');

    // cout << "Output: " << str << endl;

    // char str[12];

    // cout << "Enter character array: ";
    // // cin >> str;
    // cin.getline(str, 12);

    // for(char val: str) cout << val << endl;

    // cout << "Output: " << str << endl;

    // char str[] = "aapnacollege";
    // int len = 0;

    // for(int i=0; str[i]!= '\0'; i++) len++;

    // cout << "Length of the string: " << len << endl;

    // string str = "aapnacollege"; // This dynamic in nature (runtime resize)
    // cout << str << endl;

    // str = "Hello";
    // cout << str << endl;

    // string str1 = "aapna"; 
    // string str2 = "college";
    // string str = str1 + str2;

    // cout << str << endl;
    // cout << (str1==str2) << endl;
    // cout << (str1<str2) << endl;
    // cout << str1.length() << endl;
    // cout << str1.size() << endl;

    string str;

    cout << "Enter any string: ";
    getline(cin,str);

    cout << str << endl;

    for(int i=0; i<str.length(); i++) cout << str[i] << " ";

    return 0;
}