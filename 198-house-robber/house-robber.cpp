class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len == 0) return 0;
        if(len == 1) return nums[0];
        int prev1 = max(nums[0], nums[1]);
        int prev2 = nums[0];
        int maxloot = prev1;

        for(int i = 2; i < len; i++){
            maxloot = max(prev1, prev2 + nums[i]);
            prev2 = prev1;
            prev1 = maxloot;
        }
        return maxloot;
    }
};