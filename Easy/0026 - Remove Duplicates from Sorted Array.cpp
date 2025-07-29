class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s1=nums.size();
        auto it= unique(nums.begin(),nums.end());
        nums.erase(it,nums.end());
        int s2=nums.size();
        return s2;
    }
};
