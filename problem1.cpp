/*
 * Question: 
 * Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

 * For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
*/

#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;

        unordered_map<int,int> mp;

        int arr[n]; //or int * arr = new int[n] for dynamic initialization

        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        for(int i = 0; i<n; i++){
            int ans = k-arr[i];
            if(mp[ans]>=1){
                cout<<ans<<endl;
                break;
            }
        }
    }
}