/*
 * Question: 
 * Given an array of integers, return a new array such that each 
 * element at index i of the new array is the product of all the 
 * numbers in the original array except the one at i.
*/

#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;

        int arr[n]; //or int * arr = new int[n] for dynamic initialization
        int product = 1;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            product *= arr[i];
        }

        for(int i = 0; i<n; i++){
            cout<<product/arr[i]<<" ";
        }
        cout<<endl;
        
    }
}