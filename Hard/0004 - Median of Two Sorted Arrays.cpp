class Solution {
public:
  double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();
    
    std::vector<int> mergedArray(m + n);
    int i = 0, j = 0, k = 0;
    
    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            mergedArray[k++] = nums1[i++];
        } else {
            mergedArray[k++] = nums2[j++];
        }
    }
    
    while (i < m) {
        mergedArray[k++] = nums1[i++];
    }
    
    while (j < n) {
        mergedArray[k++] = nums2[j++];
    }
    
    if ((m + n) % 2 == 0) {
        int mid1 = mergedArray[(m + n) / 2];
        int mid2 = mergedArray[(m + n) / 2 - 1];
        return (static_cast<double>(mid1 + mid2) / 2.0);
    } else {
        return static_cast<double>(mergedArray[(m + n) / 2]);
    }
}

};
