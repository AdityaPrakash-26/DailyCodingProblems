/*
 * This question is asked by Amazon. Given a string representing your stones and another 
 * string representing a list of jewels, return the number of stones that you have that 
 * are also jewels.
 */
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string jewels,stones;
    cin>>jewels>>stones;

    unordered_map<char, int> jewelMap;

    for(int i = 0; i<jewels.size(); i++){
        jewelMap[jewels.at(i)]++;
    }
    int ans = 0;
    for(int i = 0; i<stones.size(); i++){
        if(jewelMap.count(stones.at(i))>0){
            ans += jewelMap.at(stones.at(i));   //this works but I don't know why
        }
    }
    cout<<ans<<endl;
}