#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    //input starts
    vector<string> input;
    int size;
    cin>>size;
    int lengthOfShortestString = INT_MAX;
    for(int i = 0; i<size; i++){
        string str;
        cin>>str;
        if(lengthOfShortestString>str.size()){
            lengthOfShortestString = str.size();
        }
        input.push_back(str);
    }
    //input ends

    int i = 0;
    bool hasEncounteredDifferentCharacter;
    while(i<lengthOfShortestString){
        for(int j = 0; j<size-1; j++){
            if(input[j][i] == input[j+1][i]){
                continue;
            } else {
                hasEncounteredDifferentCharacter = true;
                break;
            }
        }
        if(hasEncounteredDifferentCharacter){
            break;
        }
        i++;
    }

    for(int j = 0; j<i; j++){
        cout<<input[0][j];
    }

    cout<<"\n";

}