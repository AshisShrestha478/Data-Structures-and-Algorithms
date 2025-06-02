#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    // map<string,int> m;

    // m["tv"] = 100;
    // m["laptop"] = 100;
    // m["headphones"] = 50;
    // m["watch"] = 20;

    // for(auto p: m){
    //     cout << p.first << " " << p.second << endl;
    // }

    // cout << "count = " << m.count("laptop") << endl;

    // if(m.find("tv")!= m.end()) cout << "Found" << endl;
    // else cout << "Not Found" << endl;

    // multimap<string,int> m;

    // // Unlike map we cannot use square map here
    // m.emplace("tv",100);
    // m.emplace("tv",100);
    // m.emplace("tv",100);

    // // m.erase("tv");
    // m.erase(m.find("tv"));

    // for(auto p: m){
    //     cout << p.first << " " << p.second << endl;
    // }

    unordered_map<string,int> m;

    // Unlike map we cannot use square map here
    m.emplace("tv",100);
    m.emplace("laptop",20);
    m.emplace("pc",30);

    // m.erase("tv");
    // m.erase(m.find("tv"));

    for(auto p: m){
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}