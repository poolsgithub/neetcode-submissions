class Solution {
public:

    string encode(vector<string>& strs) {
        string encode;
        for(auto str : strs){
            int n = str.size();
            encode += '@' + to_string(n) + '#' + str;
        }
        return encode;
    }

    vector<string> decode(string s) {
        vector<string> decode;
        int left;
        int n = s.size();
        int size;
        for(int i = 0; i < n; i++){
            if(s[i] == '@'){
                string len = "";
                i++;
                while (isdigit(s[i])) {
                    len += s[i];
                    i++;
                }
                size = stoi(len);
                int temp = len.size();
                left = i;
            }
            if(s[i] == '#'){
                cout << s.substr(i+1,size);
                decode.push_back(s.substr(i+1,size));
                i = i + size;
            }
        }
        return decode;
    }
};
