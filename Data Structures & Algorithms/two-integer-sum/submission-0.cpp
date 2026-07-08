class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int> hash;
       int size = nums.size();
       for(int i = 0;i<size;i++){
            int rem = target - nums[i];
            if( hash.find(rem) != hash.end()){
                return {hash[rem],i};
            } 
            hash[nums[i]] = i;
       }
       return {};
    }
};
