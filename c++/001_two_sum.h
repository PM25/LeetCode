#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int nums_sz = nums.size();
        vector<int> ans;

        for(int i(0); i<nums_sz; ++i) {
            for(int j(i+1); j<nums_sz; ++j) {
                if(nums.at(i) + nums.at(j) == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }

        return ans;
    }
};
