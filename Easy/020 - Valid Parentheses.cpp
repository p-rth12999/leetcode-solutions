class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string s1 = "";
        int n = strs.size();
        int minLen = strs[0].size();
        for (int i = 1; i < n; i++) {
            if (strs[i].size() < minLen) {
                minLen = strs[i].size();
            }
        }
        for (int j = 0; j < minLen; j++) {
            char currentChar = strs[0][j];
            for (int k = 1; k < n; k++) {
                if (strs[k][j] != currentChar) {
                    return s1;
                }
            }
            s1 += currentChar;
        }

        return s1;
    }
};
