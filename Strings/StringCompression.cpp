#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int compress(vector<char>& chars) {
    int count=0, repIndex=0;
    for(int i=0; i<chars.size(); i++){
        char currChar=chars[i];
        while(i<chars.size() && currChar==chars[i]) count++, i++;
        chars[repIndex++]=currChar;
        if(count>1){
            string digitString=to_string(count);
            for(char val: digitString) chars[repIndex++]=val;
        }
        count=0,i--;
    }
    return repIndex;
    // chars.resize(repIndex);
    // return chars.size();
}

int main()
{
    vector<char> chars = {'a','a','b','b','c','c','c'};

    cout << compress(chars) << endl;

    return 0;
}