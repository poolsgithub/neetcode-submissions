class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(int i = 0;i<strs.size();i++){
            string key = strs[i];
            int freq[26]={0};
            for(auto it:key){
                freq[it - 'a']++;
            }
            key = "";
            for(int j=0;j<26;j++){
                string add(freq[j], char('a' + j));
                key += add;
            }
           mp[key].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
