class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set <int> hash;
        hash.insert(nums.begin(),nums.end());
        int count = 1;
        int maxcount = 0;
        for (auto it = hash.begin(); it != hash.end(); ++it){
            if(next(it)!= hash.end() &&  *it + 1 == *next(it)){
                count++;
            }
            else{
                count = 1;
            }
            maxcount = max(count,maxcount);
        }
        return maxcount;
}    
};
