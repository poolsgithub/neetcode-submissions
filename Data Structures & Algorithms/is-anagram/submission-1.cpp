class Solution {
public:
    bool isAnagram(string s, string t) {
        map <int,int> freq1;
        map <int,int> freq2;

        for(auto j: s){
            freq1[j]++;
        }
        for(auto i: t){
            freq2[i]++;
        }

        if(freq1 == freq2){
            return true;
        }
        else{
            return false;
        }

    }
};
