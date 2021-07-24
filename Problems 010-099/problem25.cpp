#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

vector<int> greaterElements(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    unordered_map<int,int> m1;
    stack<int> s1;

    for(int i=0;i<nums2.size();i++) { 
        if(s1.empty()) {   
            s1.push(nums2[i]);
        } else {   
            while(!s1.empty() && nums2[i]>s1.top()) {  
                m1[s1.top()] = nums2[i];
                s1.pop();
            }
            s1.push(nums2[i]);  //since nums2[i] is less than s1.top(), we push it to stack
        }
    }
    
    while(!s1.empty()) {    //for the elements we did not find a greater number, we map them as -1
        m1[s1.top()]=-1;
        s1.pop();
    }
    
    for(int j=0;j<nums1.size();j++) {
        ans.push_back(m1[nums1[j]]);
    }
    return ans;
}

int main() {
    vector<int> nums1;
    vector<int> nums2;
    nums1.push_back(4);
    nums1.push_back(1);
    nums1.push_back(2);

    nums2.push_back(1);
    nums2.push_back(3);
    nums2.push_back(4);
    nums2.push_back(2);

    vector<int> res = greaterElements(nums1, nums2);

    for(int i = 0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}