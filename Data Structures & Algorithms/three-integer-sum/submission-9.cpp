class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0;i < n-2;i++){
            if(nums[i] == nums[i-1] && i != 0){
                continue;
            }
            int p1 = i+1;
            int p2 = n-1;
            int temp = -nums[i];
            while(p1<p2){
                if(nums[p1] + nums[p2] == temp && p1 != p2){
                    result.push_back({nums[i],nums[p1],nums[p2]});
                    while(p1 < n-1 && nums[p1+1] == nums[p1]) p1++;
                    while(nums[p2] == nums[p2-1] && p2 > 0)p2--;
                    p1++;
                    p2--;
                    
                }
                else if(nums[p1] + nums[p2] > temp){
                    p2--;
                }
                else{
                    p1++;
                }
            }
        }

        return result;
        
    }
};
