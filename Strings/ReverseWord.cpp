#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// string reverseWords(string s) {
//     string result="";
//     int lastIndex,firstIndex=0;
//     while(firstIndex<s.size()){

//         while(firstIndex<s.size() && s[firstIndex]==' ')
//             firstIndex++;

//         if (firstIndex >= s.size()) 
//             break;

//         lastIndex=firstIndex;

//         while(lastIndex<s.size() && s[lastIndex]!=' ') 
//             lastIndex++;

//         if(result.size()==0) 
//             result = s.substr(firstIndex,lastIndex-firstIndex);
//         else 
//             result = s.substr(firstIndex,lastIndex-firstIndex) + " " + result;
        
//             firstIndex=lastIndex;
//     }
//     return result;
// }

// Using Reverse 

string reverseWords(string s)
{
    int n = s.length();
    string ans = "";

    reverse(s.begin(),s.end());

    for(int i=0; i<n; i++){
        string word = "";
        while(i<n && s[i] != ' '){
            word += s[i];
            i++;
        }

        reverse(word.begin(),word.end());
        if(word.length()>0){
            ans += " " + word;
        }
    }
    return ans.substr(1);
    
}


int main()
{
    // string s = "the sky is blue";
    // string s = "  hello world  ";
    string s = "a good   example";

    cout << reverseWords(s) << endl;

    return 0;
}