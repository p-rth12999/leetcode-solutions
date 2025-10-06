#include <vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        // 'write_ptr' keeps track of the position to place the next non-zero element.
        int write_ptr = 0;

        // First, move all non-zero elements to the front of the array.
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                // If we find a non-zero number, move it to the 'write_ptr' position.
                nums[write_ptr] = nums[i];
                // Move the write pointer to the next spot.
                write_ptr++;
            }
        }

        // At this point, all non-zero elements are at the beginning.
        // Now, we just need to fill the rest of the array with zeroes.
        for (int i = write_ptr; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
