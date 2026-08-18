class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;

        for (int i = 0; i < n; i++) {
            bool alreadyPresent = false;

            for (int x : result) {
                if (x == nums[i]) {
                    alreadyPresent = true;
                    break;
                }
            }

            if (alreadyPresent)
                continue;

            int cnt = 0;

            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i]) {
                    cnt++;
                }
            }

            if (cnt > n / 3) {
                result.push_back(nums[i]);
            }

            if (result.size() == 2)
                break;
        }

        return result;
    }
};