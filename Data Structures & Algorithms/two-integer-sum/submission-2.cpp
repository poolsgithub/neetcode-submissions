class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        int i = -1;
        for(auto num : nums){
            i++;
            int temp = target - num;
            if(seen.find(temp) != seen.end()){
                return {seen[temp],i};
            }
            else{
                seen[num] = i;
            }
        }
        return {};
    }
};
