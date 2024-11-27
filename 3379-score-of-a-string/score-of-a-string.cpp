class Solution {
public:
    int scoreOfString(string s) {
        int n = s.length(), num = 0;
        for (int i = 0; i < n-1; i++) {
            num = num + abs(s.at(i) - s.at(i + 1));
        }
        return num;
    }
};