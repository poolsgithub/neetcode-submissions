class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> keymp;
        for(auto s : strs){
            string key = s;
            sort(key.begin(),key.end());
            if(keymp.find(key) != keymp.end()){
                keymp[key].push_back(s);
            }
            else{
                keymp[key] = {s};
            }
        }

        for(auto it : keymp){
            result.push_back(it.second);
            }
        return result;
    }
};
