class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int left = 0, right = n - 1;
        while(left < right){
            while(!isalnum(s[left]) && left < n-1){
                left++;
            }
            while(!isalnum(s[right]) && right > 0){
                right--;
            }
            if(left >= right) break;
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;right--;
        }
        return true;
    }
};
