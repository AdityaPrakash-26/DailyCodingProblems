/*
 * This question is asked by Facebook. 
 * Given a string, return whether or not it forms 
 * a palindrome ignoring case and non-alphabetical 
 * characters.
 * Note: a palindrome is a sequence of characters that reads the same forwards and backwards.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin>>str;

    int len = str.size();

    for(int i = 0; i<len; i++){
        if((str.at(i)>=65 && str.at(i)<=90) || (str.at(i)>=97 && str.at(i)<=122)){
            // do nothing
        } else {
            str.erase(str.begin() + i);
        }
    }

    int newLen = str.size();

    bool breakHasTriggered = false;

    for(int i = 0; i<newLen/2; i++){
        if(str.at(i) == str.at(newLen-i-1)){
            // do nothing
        } else {
            breakHasTriggered = true;
            cout<<"NO"<<endl;
            break;
        }
    }

    if(breakHasTriggered){
        // do nothing
    } else {
        cout<<"YES"<<endl;
    }
}
