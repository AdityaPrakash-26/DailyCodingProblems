#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;

    int freqArray[26] = {0};

    for(int i = 0; i<26; i++){
        freqArray[s[i]-'a']++;
    }

    bool hasUniqueElement = false;
    int i = 0;

    for(i = 0; i<26; i++){
        if(freqArray[s[i]-'a']==1){
            hasUniqueElement = true;
            break;
        }
    }
    if(hasUniqueElement){
        cout<<i<<endl;
    } else {
        cout<<"-1\n";
    }
}