#include <vector>
#include <stack>

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        vector<int> answer(temperatures.size(), 0);
        

        stack<int> s;


        for (int i = 0; i < temperatures.size(); ++i) {
            while (!s.empty() && temperatures[i] > temperatures[s.top()]) {
                int prev_index = s.top();
                s.pop();
                
                answer[prev_index] = i - prev_index;
            }
            
            s.push(i);
        }
        
        return answer;
    }
};
