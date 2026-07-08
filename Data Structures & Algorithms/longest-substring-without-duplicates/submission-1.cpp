class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char, int> mp;
        int cnt = 0, maxlen = 0;
        int size = s.size() - 1;
        int l = 0 , r = 0;
        while(l <= r && r <= size){
            if(mp.find(s[r]) != mp.end()){
                mp.erase(s[l]);
                l++;
            }
            else{
                mp.insert({s[r],r});
                r++;
                cnt = r-l;
                maxlen = max(maxlen,cnt);
            }
        }
        return maxlen;
    }
};
