class Solution {
public:
    int findMin(vector<int> &nums) {
        // find breaking point where nums[i] > nums[i+1]
        // return i + 1
        int left = 0, right = nums.size() - 1;
        int mid = 0;
        while(left < right){
            mid = left + (right - left) / 2;
            if(nums[mid] > nums[right]){
                // valid find least valid
                left = mid + 1;
            }
            else{
                right = mid;
            }
        }
        return nums[left];
    }
};
