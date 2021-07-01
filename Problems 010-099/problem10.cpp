#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s,t;
    cin>>s>>t;

    unordered_map<char, int> sMap;
    unordered_map<char, int> tMap;

    for(int i = 0; i<s.length(); i++){
        sMap[s[i]]++;
    }

    for(int i = 0; i<t.length(); i++){
        tMap[s[i]]++;
    }

    bool hasTheSameHashMap = true;

    for(int i = 0; i<tMap.size(); i++){
        
    }
}