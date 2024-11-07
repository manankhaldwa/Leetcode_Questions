class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int expectednumber = nums.size();

        for(int i = 0; i < nums.size(); i++)
        {
            expectednumber ^= i ^ nums[i];
        }
        return expectednumber;
    }
};