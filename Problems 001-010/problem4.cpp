/*
 *This question is asked by Google. Given a string, 
 * return whether or not it uses capitalization correctly. 
 * A string correctly uses capitalization if all letters 
 * are capitalized, no letters are capitalized, or only 
 * the first letter is capitalized.
 */
#include <iostream>
#include <string>
using namespace std;

bool isOnlyFirstLetterUppercase(string str, int size);
bool isNoLetterUppercase(string str, int size);
bool isEverythingUppercase(string str, int size);

int main() {
    string str;
    cin>>str;
    int size = str.size();

    bool isCorrectlyCapitalized = (isOnlyFirstLetterUppercase(str, size) || isNoLetterUppercase(str, size) || isEverythingUppercase(str, size));

    if(isCorrectlyCapitalized){
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
}

bool isOnlyFirstLetterUppercase(string str, int size){
    if(str.at(0)>=65 && str.at(0)<=90  ){       //is letter uppercase?
        for(int i = 1; i<size; i++){
            if(str.at(i)>=97 && str.at(i)<=122){    //is letter lowercase??
                continue;
            } else {
                //we meet another uppercase
                //hence the first charater is not the
                //only upper case character
                return false;
            }
        }
        return true; //we have completed the form loop and every element after 1st was lowercase.
    } else {
        return false;   //not uppercase, hence return false
    }
}

bool isNoLetterUppercase(string str, int size){
    for(int i = 0; i<size; i++){
        if(str.at(i)>=65 && str.at(i)<=90){ //character is uppercase
            return false;
        }
    }
    return true;
}

bool isEverythingUppercase(string str, int size){
    for(int i = 0; i<size; i++){
        if(str.at(i)>=97 && str.at(i)<=122){ //character is lowercase
            return false;
        }
    }
    return true;
}