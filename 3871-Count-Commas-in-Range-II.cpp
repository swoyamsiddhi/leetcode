class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long start = 1000;
        int commas = 1;

        while (start <= n) {
            long long nextStart = start * 1000;
            long long end = min(n, nextStart - 1);

            ans += (end - start + 1) * commas;

            start = nextStart;
            commas++;
        }

        return ans;
    }
};