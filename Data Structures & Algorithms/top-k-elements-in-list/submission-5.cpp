class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>result;
        unordered_map<int,int> freq;
        
        for(auto num : nums){
            freq[num]++;
        }

        map<int, vector<int>> buckets;

        for(auto it : freq){
            buckets[it.second].push_back(it.first);
        }
        for(auto it = buckets.rbegin(); it != buckets.rend(); ++it){
            for(auto num : it->second){    
                result.push_back(num);
                if(result.size()==k) return result;
            }
        }
    }
};
