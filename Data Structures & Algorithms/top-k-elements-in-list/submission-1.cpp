class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>result;
        unordered_map<int,int> freq;
        
        for(auto num : nums){
            freq[num]++;
        }
        
        vector<pair<int,int>> v(freq.begin(), freq.end());

        sort(v.begin(), v.end(),
        [](auto &a, auto &b) {
         return a.second > b.second; // sort by frequency
         });

        for(int i=0;i<k;i++){
            result.push_back(v[i].first);
        }
        return result;
    }
};
