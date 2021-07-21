#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool sameResult(string s, string t){
    stack<char> stackForStringS;
    stack<char> stackForStringT;

    for(int i = 0; i<s.size(); i++){
        if(s[i] == '#'){
            if(stackForStringS.empty()){
                return false;
            } else {
                stackForStringS.pop();
            }
        } else {
            stackForStringS.push(s[i]);
        }
    }

    for(int i = 0; i<t.size(); i++){
        if(t[i] == '#'){
            if(stackForStringT.empty()){
                return false;
            } else {
                stackForStringT.pop();
            }
        } else {
            stackForStringT.push(t[i]);
        }
    }

    if(stackForStringS.size() == stackForStringT.size()){
        for(int i = 0; i<stackForStringS.size(); i++){
            if(stackForStringS.top() == stackForStringT.top()){
                stackForStringS.pop();
                stackForStringT.pop();
            } else {
                return false;
            }
        }
        return true;
    } else {
        return false;
    }
}

int main() {
    string s = "ABC#";
    string t = "AB";

    cout<<sameResult(s,t)<<endl;
}