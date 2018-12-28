class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start(0), end(nums.size() - 1);

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(nums.at(mid) == target) return mid;
            if(nums.at(mid) < target) start = mid + 1;
            else if(nums.at(mid) > target) end = mid - 1;
        }

        return start;
    }
};
