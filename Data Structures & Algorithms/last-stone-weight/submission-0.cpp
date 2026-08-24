class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int stone : stones){
            pq.push(stone);
        }
        int x, y;
        while(!pq.empty()){
            x = pq.top();
            pq.pop();
            if(pq.empty()) return x;
            y = pq.top();
            pq.pop();
            // case - 1:
            if(x > y) pq.push(x-y);
            else if(x == y) continue;
            else pq.push(y-x); 
        }
       return 0;
    }
};
