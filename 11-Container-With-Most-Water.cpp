class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int area;
        int maxi=0;
        for (int i=0;i<n;i++){
            for(int k=i+1;k<n;k++){
                int minx=min(height[i],height[k]);
                area=minx*(k-i);
                maxi=max(area,maxi);
            }
        }
        return maxi;
    }
};