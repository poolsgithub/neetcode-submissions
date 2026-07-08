class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set <int> num;

        for (auto it: nums){
            if(num.find(it) != num.end()) {
                return true;
            }
            else{
                num.insert(it);
            }
            
        } 

        return false;
        
    }
};