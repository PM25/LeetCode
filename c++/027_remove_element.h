class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int backIdx = 0;
        for(int idx = 0; idx < nums.size(); ++idx) {
            if(nums.at(idx) != val){
                nums.at(backIdx++) = nums.at(idx);
            }
        }

        return backIdx;
    }
};
