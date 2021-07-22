#include <iostream>
#include <stack>
using namespace std;

string removeAdjacentDuplicates(string s){
    if(s == ""){
        return s;
    }

    stack<char> stk;

    for(int i = 0; i < s.length(); i++){
        if(!stk.empty()){
            if(stk.top() != s[i]){
                stk.push(s[i]);
            } else {
                stk.pop();
            }
        } else {
            stk.push(s[i]);
        }
    }
    string result = "";
    while(!stk.empty()){
        result += stk.top();
        stk.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    //driver code
    string s = "aabcccccaaa";
    cout << removeAdjacentDuplicates(s) << endl;
}