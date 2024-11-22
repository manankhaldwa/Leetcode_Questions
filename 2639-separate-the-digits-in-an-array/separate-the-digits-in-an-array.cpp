class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>answer;
        for(auto num : nums){
            vector<int>digits;
            while(num > 0){
                int last_digits = num % 10;
                digits.push_back(last_digits);
                num /= 10;
            }
            answer.insert(answer.end(), digits.rbegin(), digits.rend());
        }
        return answer;
    }
};