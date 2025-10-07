
#include <numeric> // For std::accumulate

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        // If the vector is empty, the answer is 0.
        if (nums.empty()) {
            return 0;
        }

        // Calculate the XOR sum of the entire array.
        // The third argument is the initial value.
        // The fourth argument is the binary operation (bitwise XOR).
        int total_xor = accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());

        // If the total XOR sum is not zero, the entire array is the answer.
        if (total_xor != 0) {
            return nums.size();
        } 
        // If the total XOR sum is zero, the answer is the array size minus one,
        // unless all elements are zero.
        else {
            // Check if all elements are zero.
            // We can iterate until we find a non-zero element.
            for (int num : nums) {
                if (num != 0) {
                    // Found a non-zero element, so a subarray of size n-1 is possible.
                    return nums.size() - 1;
                }
            }
            // If the loop completes, all elements were zero.
            return 0;
        }
    }
};
