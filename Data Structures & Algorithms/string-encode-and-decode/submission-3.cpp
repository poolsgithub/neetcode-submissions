class Solution {
public:

    string encode(vector<string>& strs) {
        string msg = "";
        for(auto it : strs){
            msg = msg + "~" + it;
        }
        return msg;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int prev = 1;
        for(int i = 1 ; i <= s.size(); i++){
            if(s[i] == '~'||i == s.size()){
                ans.push_back(s.substr(prev,i-prev));
                prev = i + 1;
            }
        }
        return ans;
    }
};
