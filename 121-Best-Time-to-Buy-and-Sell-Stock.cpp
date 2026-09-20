class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int left = 0;
        int m = 0;

        for(int right = 1; right < prices.size(); right++) {
            if(prices[right] < prices[left]) {
                left = right;
            }
            else {
                m = max(m, prices[right] - prices[left]);
            }
        }

        return m;
    }
};