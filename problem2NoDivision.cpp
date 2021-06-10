#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> res(len);
        if(!len){
            return res;     //edge case
        }

        res[0] = 1;
        for (int i = 1; i < len; i++) {
            res[i] = res[i - 1] * nums[i - 1];  //trailing
        }
        int prod = nums[len-1];
        for(int i = len-2; i>=0; i--){
            res[i] *= prod;
            prod *= nums[i];
        }
        return res;
    }
};