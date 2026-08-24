class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> mheap;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(int num: nums){
            mheap.push(num);
            if(mheap.size() > k){
                mheap.pop();
            }
        }
    }
    
    int add(int val) {
        mheap.push(val);
        if(mheap.size() > k){
            mheap.pop();
        }
        return mheap.top();
    }
};
