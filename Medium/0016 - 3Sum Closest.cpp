class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); // Required for two-pointer technique
        int n = nums.size();
        int closestSum = nums[0] + nums[1] + nums[2]; // Initialize with the first triplet

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];

                // If this sum is closer to the target, update closestSum
                if (abs(currentSum - target) < abs(closestSum - target)) {
                    closestSum = currentSum;
                }

                // Move pointers based on comparison
                if (currentSum < target)
                    left++;
                else
                    right--;
            }
        }
        return closestSum;
    }
};
