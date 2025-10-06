class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int s = nums.size();
        int count = 1;
        vector<int> result;
        for (int i = 0; i < s - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                count++;
            } else {
                result.push_back(count);
                count = 1;
            }
        }
        result.push_back(count); 

        int maximum_count = result[0];

        for (int i = 1; i < result.size(); i++) {
 
            if (maximum_count < result[i]) {
                maximum_count = result[i];
            }
        }
        return maximum_count;
    }
};
