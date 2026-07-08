class Solution {
public:
    string minWindow(string s, string t) {
        string res = "";
        if(s.size() < t.size()) return res;

        int minsize = INT_MAX;
        unordered_map <char, int> freqt;
        
        for(auto s : t){
            freqt[s]++;
        }
        
        int left = 0;
        int need = t.size();
        for(int r = 0; r < s.size(); r++){
            //add s[r]
            if(freqt[s[r]] > 0){
                need--;
            }
            freqt[s[r]]--;
            //when window is valid
            while(need == 0){
                freqt[s[left]]++;

                if (freqt[s[left]] > 0)
                    need++;

                // assign the res
                if(minsize > r - left + 1){
                    res = s.substr(left, (r - left + 1));
                    minsize = min(minsize, r - left + 1);
                }
                
                left++;
            }    

        }

        return res;
    }
};

