class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();
        if(n1 > n2) return false;
        vector<int> freq(26,0);
        vector<int> zero(26,0);
        for(auto ch : s1){
            int temp = ch - 'a';
            freq[temp]--;
        }
        int left = 0, right = 0;
        while(right < n1){
            int temp = s2[right] - 'a';
            freq[temp]++;
            right++;
        }
        if(freq == zero) return true;
        while(right < n2){
            int temp = s2[left] - 'a';
            freq[temp]--;
            left++;
            temp = s2[right] - 'a';
            freq[temp]++;
            right++;
            if(freq == zero) return true;
        }
        return false;
    }
};
