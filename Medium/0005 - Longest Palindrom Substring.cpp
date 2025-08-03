class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0, end = 0;
        int n = s.length();

        for (int i = 0; i < n; ++i) {
            int len1 = expandAroundCenter(s, i, i);     // odd length palindrome
            int len2 = expandAroundCenter(s, i, i + 1); // even length palindrome
            int len = max(len1, len2);
            if (len > end - start) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }
        return s.substr(start, end - start + 1);
    }

    int expandAroundCenter(string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }
};
