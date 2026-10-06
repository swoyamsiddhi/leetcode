class Solution {
public:
    int secondHighest(string s) {
        vector<int> ans;

        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])){
                ans.push_back(s[i] - '0');
            }
        }

        if(ans.size() < 2)
            return -1;

        int largest = ans[0];
        int slargest = -1;

        for(int i = 1; i < ans.size(); i++){
            if(ans[i] > largest){
                slargest = largest;
                largest = ans[i];
            }
            else if(ans[i] < largest && ans[i] > slargest){
                slargest = ans[i];
            }
        }

        return slargest;
    }
};