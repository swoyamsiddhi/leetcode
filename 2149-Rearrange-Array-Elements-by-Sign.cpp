class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int posin=0,negin=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negin]=nums[i];
                negin+=2;
            }
            else{
                ans[posin]=nums[i];
                posin+=2;
            }
        }
        return ans;
        
    }
};