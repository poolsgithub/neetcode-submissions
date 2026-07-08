class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(auto it:s){
            if(isalnum(it)){
                t.push_back(tolower(it));
            }
        }
        int p1,p2;
        p1 = 0;
        p2 = t.size()-1;
        while(p1<p2){
            if(t[p1] == t[p2]){
                p1++;
                p2--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
