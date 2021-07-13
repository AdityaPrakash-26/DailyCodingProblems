#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];

    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }

    for(int i = 0; i<m; i++){
        cin>>arr2[i];
    }

    int smaller = min(m,n);
    int auxArr[smaller];

    int i=0,j=0,k=0;

    sort(arr1, arr1+n);
    sort(arr2, arr2+m);

    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            auxArr[k] = arr1[i];
            i++;
            j++;
            k++;
        } else if (arr1[i] < arr2[j]){
            i++;
        } else {
            j++;
        }
    }

    for(int i = 0; i<k; i++){
        cout<<auxArr[i]<<" ";
    }
    cout<<"\n";
}