class Solution {
public:
    
    int nthUglyNumber(int n) {
        if (n == 1) return 1;
        vector<int> dp(n,1);
        int l2 = 0;
        int l3 = 0;
        int l5 = 0;
        for (int i = 1; i < n; i++) {
            int val = min(dp[l2] * 2, min(dp[l3] * 3, dp[l5] * 5));
            dp[i] = val;
            if (val == dp[l2] * 2) l2++;
            if (val == dp[l3] * 3) l3++;
            if (val == dp[l5] * 5) l5++;
        }
        return dp[n - 1];
    }
};