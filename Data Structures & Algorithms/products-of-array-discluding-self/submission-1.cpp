class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        int prefix[size];
        int suffix[size];
        
        int pre = 1, suf = 1;
        for(int i = 0; i<size; i++){
            prefix[i] = pre;
            pre = pre * nums[i];
        }
        for(int i = size - 1; i>=0; i--){
            suffix[i] = suf;
            suf = suf * nums[i];
        }
        vector <int> ans;
        for(int i = 0;i<size;i++){
            ans.push_back(prefix[i] * suffix[i]);
        }
        return ans;
    }
};
