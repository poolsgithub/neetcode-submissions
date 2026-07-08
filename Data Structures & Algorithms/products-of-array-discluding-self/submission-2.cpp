class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left ,right;
        left = 1;
        right = 1;
        int i = 0;
        for(int num : nums){
            result[i] = left;
            left = left * num;
            i++;
        }
        for(int i = n-1; i >= 0; i--){
            result[i] *= right;
            right *= nums[i];
        }

        return result;
    }
};
