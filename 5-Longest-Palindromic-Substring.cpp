class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";

        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {

                string temp = s.substr(i, j - i + 1);

                string r = temp;
                reverse(r.begin(), r.end());

                if (temp == r && temp.size() > ans.size()) {
                    ans = temp;
                }
            }
        }

        return ans;
    }
};