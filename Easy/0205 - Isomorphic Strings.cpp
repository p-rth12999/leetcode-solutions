class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;

        unordered_map<char, char> map_s_to_t;
        unordered_map<char, char> map_t_to_s;

        for (int i = 0; i < s.length(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            // If s[i] is already mapped, check consistency
            if (map_s_to_t.count(c1)) {
                if (map_s_to_t[c1] != c2)
                    return false;
            } else {
                map_s_to_t[c1] = c2;
            }

            // Also make sure c2 is not already mapped to a different c1
            if (map_t_to_s.count(c2)) {
                if (map_t_to_s[c2] != c1)
                    return false;
            } else {
                map_t_to_s[c2] = c1;
            }
        }

        return true;
    }
};
