class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> seen;
        int count = 0, maxcount = 0;
        for(int num : nums){
            seen.insert(num);
        }
        for(auto it :seen){
            if(seen.find(it - 1) != seen.end()){
                continue;
            }
            else{
                count = 1;
                while(seen.find(it + 1) != seen.end()){
                    count++;
                    it = it+1;
                }
                maxcount = max(count,maxcount);
            }
        }
        return maxcount;
    }
};
