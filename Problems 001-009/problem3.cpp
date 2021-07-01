/*
 * This question is asked by Amazon. Given a string representing 
 * the sequence of moves a robot vacuum makes, return whether or 
 * not it will return to its original position. The string will only 
 * contain L, R, U, and D characters, representing left, right, up, 
 * and down respectively.
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
    string moves;
    cin>>moves;

    int hashMap[4] = {0,0,0,0};

    for(int i = 0; i<moves.size(); i++){
        if(moves.at(i)=='L'){
            hashMap[0]++;
        } else if (moves.at(i) == 'R'){
            hashMap[1]++;
        } else if (moves.at(i) == 'U'){
            hashMap[2]++;
        } else {
            hashMap[3]++;
        }
    }

    bool canReturn = (hashMap[0] == hashMap[1]) && (hashMap[2] == hashMap[3]);

    if(canReturn){
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
}