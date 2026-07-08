class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> freq;
        unordered_map<int,int> hash;
        for(auto it:nums){
            hash[it]++;
        }
        vector<pair<int,int>> freqvec;
        for(auto &it : hash){
            freqvec.push_back({it.second,it.first});
        }

        sort(freqvec.rbegin(), freqvec.rend());

        for (int i = 0;i<k;i++){
            freq.push_back(freqvec[i].second);
        }

        return freq;
        
    }
};
