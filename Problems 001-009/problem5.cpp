#include <iostream>
#include <string>
using namespace std;

int main() {
    string b1;
    string b2;
    cin>>b1>>b2;

    string result = ""; // Initialize result
    int s = 0;          // Initialize digit sum

    // Traverse both strings starting from last
    // characters
    int i = b1.size() - 1, j = b2.size() - 1;
    while (i >= 0 || j >= 0 || s == 1){
        // Comput sum of last digits and carry
        s += ((i >= 0)? b1[i] - '0': 0);
        s += ((j >= 0)? b2[j] - '0': 0);

        // If current digit sum is 1 or 3, add 1 to result
        result = char(s % 2 + '0') + result;

        // Compute carry
        s /= 2;

        // Move to next digits
        i--; j--;
    }
    cout<<result<<endl;
}