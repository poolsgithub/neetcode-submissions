class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        if(h < n) return -1;
        int left = 1;
        int right = 0;
        for(auto pile : piles){
            right = max(right,pile);
        }
        int mid = 0;
        while(left <= right){
            mid = left + (right - left) / 2;
            int time = 0;
            for(auto pile: piles){
                time += ceil((double)pile / mid) ;
            }
            if(time <= h){
                right = mid - 1;    
            }
            else{
                left = mid + 1;
            }
        }
        return left;
    }
};
