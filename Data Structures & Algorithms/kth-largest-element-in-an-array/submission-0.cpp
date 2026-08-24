class Solution {
public:
priority_queue<int, vector<int>, greater<int>> minheap;
    int findKthLargest(vector<int>& nums, int k) {
        for(int num : nums){
            minheap.push(num);
            if(minheap.size() > k) minheap.pop();
        }
        return minheap.top();
    }
};
