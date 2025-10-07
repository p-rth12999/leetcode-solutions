bool StkSame(stack<char> s1, stack<char> s2) {
    if (s1.size() != s2.size()) {
        return false;
    }
    bool flag = true;
    while (!s1.empty() && flag) {
        if (s1.top() == s2.top()) {
            flag = true;
        } else {
            flag = false;
        }
        s1.pop();
        s2.pop();
    }
    return flag;
}
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stk1;
        stack<char> stk2;
        for (char c : s) {
            if (c == '#') {
                if (!stk1.empty()) {
                    stk1.pop();
                }
            } else {
                stk1.push(c);
            }
        }
        for (char c : t) {
            if (c == '#') {
                if (!stk2.empty()) {
                    stk2.pop();
                }
            } else {
                stk2.push(c);
            }
        }
        return StkSame(stk1, stk2);
    }
};
