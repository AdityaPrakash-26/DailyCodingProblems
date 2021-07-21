/*
 * This question is asked by Google. Given a string only containing the following 
 * characters (, ), {, }, [, and ] return whether or not the opening and closing 
 * characters are in a valid order.
 */

#include <iostream>
#include <stack>
using namespace std;

bool validParenthesis(string s){
    stack<char> st;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        } else {
            if(st.empty()){
                return false;
            } else {
                if(s[i] == ')' && st.top() == '('){
                    st.pop();
                } else if (s[i] == '}' && st.top() == '{'){
                    st.pop();
                } else if (s[i] == ']' && st.top() == '['){
                    st.pop();
                } else {
                    return false;
                }
            }
        }
    }
    if(st.empty()){
        return true;
    } else {
        return false;
    }
}

int main() {
    string s1 = "()";
    string s2 = "())(";
    string s3 = "()[]";
    string s4 = "()[";
    string s5 = "()]";

    cout << validParenthesis(s1) << endl;
    cout << validParenthesis(s2) << endl;
    cout << validParenthesis(s3) << endl;
    cout << validParenthesis(s4) << endl;
    cout << validParenthesis(s5) << endl;
}