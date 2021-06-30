#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int sizeOfInputArray;
    cin>>sizeOfInputArray;

    int arr[sizeOfInputArray]; //or int * arr = new int[n]; for dynamic init

    for(int i = 0; i<sizeOfInputArray; i++){
        cin>>arr[i];
    }

    int targetSum;
    cin>>targetSum;

    unordered_map<int, int> hash;
    vector<int> result;
    for (int i = 0; i < size; i++){
        if (hash.count(targetSum - nums[i])) { // If the partner of this value to reach the target sum has been saved already
            result.push_back(hash[targetSum - nums[i]]); // Get index of other value
            result.push_back(i);
            return result;
        } else { // Pair has not yet been found, so save value to hash table
            hash[nums[i]] = i;
        }
    }
    return result;
}