#include <vector>

class Solution {
private:
    // Helper function to calculate the sum of a specific range.
    int sumRange(vector<int>& nums, int left, int right) {
        // FIX 1: Correctly return 0 only for empty/invalid ranges.
        if (left > right) {
            return 0;
        }
        
        int sum = 0;
        for (int i = left; i <= right; ++i) {
            sum += nums[i];
        }
        return sum;
    }

public:
    int pivotIndex(vector<int>& nums) {
        // FIX 2: Use a for loop to cleanly iterate through each possible pivot index.
        for (int pivot = 0; pivot < nums.size(); ++pivot) {
            
            // Calculate the sum of the left and right sides for the current pivot.
            int left_sum = sumRange(nums, 0, pivot - 1);
            
            // FIX 3: Use nums.size() - 1 to prevent going out of bounds.
            int right_sum = sumRange(nums, pivot + 1, nums.size() - 1);
            
            // If the sums are equal, we've found our answer.
            if (left_sum == right_sum) {
                return pivot;
            }
        }
        
        // If the loop finishes, no pivot was found.
        return -1;
    }
};
