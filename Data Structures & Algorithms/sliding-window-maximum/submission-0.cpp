class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        map<int, int> freq;
        for(int i = 0; i < k; i++){
            freq[nums[i]]++;
        }
        res.push_back(freq.rbegin()->first);
        int left = 0;
        for(int r = k; r < nums.size(); r++){
            
            freq[nums[left]]--;
            if(freq[nums[left]] == 0) freq.erase(nums[left]);
            left++;
            
            freq[nums[r]]++;

            res.push_back(freq.rbegin()->first);
        }
        return res;
    }
};
