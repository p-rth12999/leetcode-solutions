
void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    // Step 1: Find first decreasing element from the end
    while (i >= 0 && nums[i] >= nums[i + 1])
        i--;

    if (i >= 0) {
        // Step 2: Find just larger element on right of nums[i]
        int j = n - 1;
        while (nums[j] <= nums[i])
            j--;
        // Step 3: Swap them
        swap(nums[i], nums[j]);
    }

    // Step 4: Reverse the part from i+1 to end
    reverse(nums.begin() + i + 1, nums.end());
}
