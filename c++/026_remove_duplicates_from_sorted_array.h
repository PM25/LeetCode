class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        int backIdx(0);
        for(int idx(1); idx<nums.size(); ++idx){
            if(nums.at(idx) != nums.at(backIdx)){
                nums.at(++backIdx) = nums.at(idx);
            }
        } return backIdx+1;
    }
};
