class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> unique;
        int left = 0, right = 0;
        int count = 0, maxcount = 0;
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(unique.find(s[i]) != unique.end()){
                count = 0;
                int temp = unique.find(s[i])->second;
                i = temp;
                unique.clear();
            }
            else{
                unique.insert({s[i], i});
                count++;
            }
            maxcount = max(count, maxcount);
        }
        return maxcount;
    }
};
