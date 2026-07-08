class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxa = 0;
        int pre = 0,suf = n-1;
        while(pre < suf){
            int area = min(heights[pre],heights[suf]) * abs(pre - suf);
            maxa = max(maxa,area);
            if(heights[pre] < heights[suf]){
                pre++;
            }
            else{
                suf--;
            }
        }

        return maxa;

    }
};
