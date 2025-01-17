class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMax = 1, currMin = 1, maxSum = INT_MIN;

        for (auto it : nums) {
            if (it == 0) {
                currMax = 1;
                currMin = 1;
                maxSum = max(maxSum, 0);  // Consider zero as a valid max product
                continue;
            }
            
            // If the current number is negative, swap currMax and currMin
            if (it < 0) {
                swap(currMax, currMin);
            }
            
            // Update currMax and currMin
            currMax = max(it, currMax * it);
            currMin = min(it, currMin * it);
            
            // Update the global max product
            maxSum = max(maxSum, currMax);
        }

        return maxSum;
    }
};
