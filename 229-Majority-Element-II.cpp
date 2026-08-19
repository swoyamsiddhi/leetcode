class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        int el1 = 0, el2 = 0;
        int cnt1 = 0, cnt2 = 0;

        // Find the two possible candidates
        for (int i = 0; i < n; i++) {

            if (cnt1 == 0 && nums[i] != el2) {
                el1 = nums[i];
                cnt1 = 1;
            }
            else if (cnt2 == 0 && nums[i] != el1) {
                el2 = nums[i];
                cnt2 = 1;
            }
            else if (nums[i] == el1) {
                cnt1++;
            }
            else if (nums[i] == el2) {
                cnt2++;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }

        // Verify the candidates
        cnt1 = 0;
        cnt2 = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == el1)
                cnt1++;

            if (nums[i] == el2)
                cnt2++;
        }

        vector<int> result;
        int mini = n / 3 + 1;

        if (cnt1 >= mini)
            result.push_back(el1);

        if (cnt2 >= mini && el1 != el2)
            result.push_back(el2);

        return result;
    }
};