class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
   int i = m - 1;         // Last element in nums1's original part
    int j = n - 1;         // Last element in nums2
    int k = m + n - 1;     // Last position in nums1 (final size)

    // Merge from the back to front
    while (i >= 0 && j >= 0) {
        nums1[k--] = (nums1[i] > nums2[j]) ? nums1[i--] : nums2[j--];
    }

    // If anything left in nums2, copy it
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}};
