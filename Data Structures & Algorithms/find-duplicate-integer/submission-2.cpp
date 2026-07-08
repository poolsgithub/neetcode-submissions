class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0, fast = 0;
        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow == fast){
                break;
            }
        }
        //loop detected dup exists
        fast = 0;
        while(true){
            if(nums[slow] == nums[fast] && slow != fast){
                return nums[slow];
            }
            slow = nums[slow];
            fast = nums[fast];
        }
    }
};
