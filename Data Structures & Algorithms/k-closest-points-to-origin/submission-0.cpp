class Solution {
public:
    priority_queue<pair<int, vector<int>>> maxheap;
    int k;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> result;
        this->k = k;

        for(auto point : points){
            int dis = point[0] * point[0] + point[1] * point[1];
            maxheap.push({dis, point});
            if(maxheap.size() > k) maxheap.pop();
        }

        while(!maxheap.empty()){
            result.push_back(maxheap.top().second);
            maxheap.pop();
        }

        return result;
        
    }
};
