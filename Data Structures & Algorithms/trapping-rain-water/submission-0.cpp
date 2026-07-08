class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefix;
        vector<int> suffix;
        int pre = 0 , suf = n-1;
        int premax = height[0],sufmax = height[n-1];
        while(pre < n && suf >=0){
            premax = max(premax,height[pre]);
            sufmax = max(sufmax,height[suf]);
            prefix.push_back(premax);
            suffix.push_back(sufmax);
            pre++;
            suf--;
        }
        reverse(suffix.begin(),suffix.end());
        int ans=0;
        for(int i=0;i<n;i++){
            ans += abs(height[i] - min(prefix[i],suffix[i]));
        }
        return ans;
    }
};
