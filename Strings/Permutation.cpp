#include<iostream>
#include<map>
using namespace std;

// This one is using string and arrays

// bool isFreqSame (int freq1[], int freq2[])
// {
//     for (int i=0; i<26; i++){
//         if (freq1[i]!=freq2[i]) return false;
//     }
//     return true;
// }

// bool checkInclusion(string s1, string s2)
// {
//     int freq[26] = {0};
    
//     for(int i=0; i<s1.size(); i++){
//         freq[s1[i]-'a']++;
//     }

//     int windSize = s1.size();
//     for(int i=0; i<s2.size(); i++){
//         int windIdx = 0, idx = i;
//         int windFreq[26] = {0};

//         while(windIdx < windSize && idx < s2.size()){
//             windFreq[s2[idx]-'a']++;
//             windIdx++;
//             idx++;
//         }

//         if(isFreqSame(freq,windFreq)){
//             return true;
//         }
//     }
//     return false;
// }

// This one is using maps

bool checkInclusion(string s1, string s2) {
    if(s1.size()>s2.size()){
        return false;
    }
    int n=s1.size();
    map<char,int> m;
    map<char,int> m1;
    for(int k=0;k<n;k++){
        m[s1[k]]++;
    }
    for(int i=0;i<n;i++){
        m1[s2[i]]++;
    }
    if(m1==m){
        return true;
    }
    for(int j=n;j<s2.size();j++){
        m1[s2[j-n]]--;
        if(m1[s2[j-n]]==0){
            m1.erase(s2[j-n]);
        }
        m1[s2[j]]++;
        if(m1==m){
            return true;
        }
    }
    return false;
}

int main()
{
    string s1 = "ab", s2="eidbaooo";
    // string s1 = "ab", s2="eidbooaooo";
    if (checkInclusion(s1,s2)) cout << "Permutation Found" << endl;
    else cout << "Permutation not found" << endl;

    return 0;
}