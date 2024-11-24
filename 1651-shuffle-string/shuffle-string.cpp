class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result = s;
        int i = 0; 
        for(auto ind : indices){
            result[ind] = s[i];
            i++;
        }
        return result;
    }
};