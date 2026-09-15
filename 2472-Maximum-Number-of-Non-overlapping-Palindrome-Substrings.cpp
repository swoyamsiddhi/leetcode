class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.size();
        vector<int> dp(n + 1, 0);
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int l = i;
                int r = j;
                bool pal = true;
                while (l < r) {
                    if (s[l] != s[r]) {
                        pal = false;
                        break;                   }
                    l++;
                    r--;
                }
                if (pal && j - i + 1 >= k) {
                    dp[j + 1] = max(dp[j + 1], dp[i] + 1);
                }
                dp[j + 1] = max(dp[j + 1], dp[j]);
            }
        }
        return dp[n];
    }
};