class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
    unordered_set<char> seen;
    int left = 0, right = 0, maxLen = 0;
    
    while (right < s.length()) {
        // If the character is not in the set, add it and move right
        if (seen.find(s[right]) == seen.end()) {
            seen.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
            right++;
        } else {
            // If character repeats, remove from left side
            seen.erase(s[left]);
            left++;
        }
    }
    return maxLen;

    }
};
