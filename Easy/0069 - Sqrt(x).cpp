class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;

        int low = 1, high = x, ans = 0;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (mid * mid <= x) {
                ans = mid;
                low = mid + 1;  // try for a bigger number
            } else {
                high = mid - 1; // try for a smaller number
            }
        }
        return ans;
    }
};
