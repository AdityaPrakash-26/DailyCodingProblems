/*
 * Question: 
 * This question is asked by Google. 
 * Given a string, reverse all of its characters 
 * and return the resulting string.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    int i = 0, j = s.size() - 1;

    while(i<=j){
        swap(s.at(i), s.at(j));
        i++;
        j--;
    }

    cout<<s<<endl;
}