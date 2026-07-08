class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = 0;
        int n = piles.size();
        for(auto it:piles){
            maxi = max(it,maxi);
        }
        int i = 1, j = maxi;
        int hours;
        int ans;
        while(i<=j){
            int mid = (i+j)/2;
            hours = 0;
            for(auto it : piles){
                hours += (it + mid - 1) / mid;
            }
            if(hours <= h){
                ans = mid;
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }
        return ans;
    }
};
