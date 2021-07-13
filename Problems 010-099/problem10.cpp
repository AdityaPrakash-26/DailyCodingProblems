/*
 * This question is asked by Facebook. Given two strings s and t return 
 * whether or not s is an anagram of t.
 * Note: An anagram is a word formed by reordering the letters of another 
 * word.
*/

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s,t;
    cin>>s>>t;

    int freqArrayForTheSString[26] = {0};
    int freqArrayForTheTString[26] = {0};

    for(int i = 0; i<s.length(); i++){
        freqArrayForTheSString[s[i] - 'a']++;
    }

    for(int i = 0; i<t.length(); i++){
        freqArrayForTheTString[t[i] - 'a']++;
    }

    bool hasTheSameHashMap = true;

    for(int i = 0; i<26; i++){
        if(freqArrayForTheSString[i] == freqArrayForTheTString[i]){
            //do nothing
        } else {
            hasTheSameHashMap = false;
            break;
        }
    }

    if(hasTheSameHashMap){
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
}