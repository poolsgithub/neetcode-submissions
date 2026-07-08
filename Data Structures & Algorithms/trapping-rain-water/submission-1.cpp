class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        int n = height.size();
        vector<int> r_max(n);
        int lmax = 0, rmax = 0;
        for(int i = n - 1; i >= 0; i--){
            rmax = max(rmax,height[i]);
            r_max[i] = rmax;
        }
        int temp;
        for(int i = 0; i < n; i++){
            temp = min(lmax,r_max[i]);
            temp = temp - height[i];
            if(temp > 0) water += temp;
            lmax = max(lmax,height[i]);
        }
        return water;
    }
};
