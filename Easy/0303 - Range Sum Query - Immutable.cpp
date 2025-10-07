class NumArray {
    vector<int> number;
public:
    NumArray(vector<int>& nums) { number = nums; }

    int sumRange(int left, int right) {
        int sum = 0;
        for (int i = left; i <= right; i++) {
            sum += number[i];
        }
        return sum;
    }
};
