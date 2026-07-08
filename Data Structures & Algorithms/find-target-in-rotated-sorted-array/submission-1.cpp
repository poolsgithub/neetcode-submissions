class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0, j = n - 1;
        int bp = 0;
        while(i<j){
            int mid = (i+j)/2;
            if(nums[j] > nums[mid]){
                j = mid;
            }
            else{
                i = mid + 1;
            }
        }
        bp = i;
        int temp;
        i = 0,j = n - 1;
        while(i<=j){
            int mid = (i+j)/2;
            temp = (mid + bp) % n;
            if(nums[temp] == target){
                return temp;
            }
            else if(nums[temp] > target){
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }
        return -1;
    }
};
