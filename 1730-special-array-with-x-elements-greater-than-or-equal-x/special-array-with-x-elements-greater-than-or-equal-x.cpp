class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 1; i <= n; i++) {
            int count =
                n - (lower_bound(nums.begin(), nums.end(), i) - nums.begin());
            if (count == i)
                return i;
        }
        return -1;
    }
};