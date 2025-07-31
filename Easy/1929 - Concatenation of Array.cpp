class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       int n=nums.size();
       int s;
        vector<int>nums2(n);
        for(int i=0;i<n;i++)
        {
            
            nums2[i]=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            s=nums[i];
            nums2.push_back(s);
        }
        return nums2;
    }
};
