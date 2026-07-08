class Solution {
public:
    bool isAnagram(string s, string t) {
        int freqs[26] = {0}, freqt[26] = {0};
        for(auto ch : s){
            int i = ch -'a';
            freqs[i]++;
        }
        for(auto ch : t){
            int i = ch -'a';
            freqt[i]++;
        }
        for(int i = 0; i < 26; i++){
            if(freqs[i] != freqt[i]){
                return false;
            }
        }
        return true;
    }
};
