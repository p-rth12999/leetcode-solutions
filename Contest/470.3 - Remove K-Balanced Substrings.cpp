#include <string>
#include <vector>

class Solution {
public:
    std::string removeSubstring(std::string s, int k) {
        if (k == 0) {
            return s;
        }

        std::string result = "";
        for (char c : s) {
            result += c;

            // Check if a k-balanced substring might have formed at the end
            if (result.length() >= 2 * k) {
                bool open_match = true;
                bool close_match = true;
                int len = result.length();

                // Check for k consecutive '('
                for (int i = 0; i < k; ++i) {
                    if (result[len - 2 * k + i] != '(') {
                        open_match = false;
                        break;
                    }
                }

                // If the opening parens match, check for k consecutive ')'
                if (open_match) {
                    for (int i = 0; i < k; ++i) {
                        if (result[len - k + i] != ')') {
                            close_match = false;
                            break;
                        }
                    }
                }
                
                // If both parts match, erase the k-balanced substring
                if (open_match && close_match) {
                    result.erase(len - 2 * k);
                }
            }
        }
        return result;
    }
};
