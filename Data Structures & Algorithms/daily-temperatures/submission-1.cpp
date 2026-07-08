class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> result(size, 0);
        stack<pair<int,int>> Monotonic;
        for(int i = 0; i < size;i++){
            if(Monotonic.empty()){
                Monotonic.push({temperatures[i], i});
                continue;
            }
            pair<int, int> top = Monotonic.top();
            if(top.first >= temperatures[i]){
                Monotonic.push({temperatures[i], i});
            }
            else{
                result[top.second] = i-top.second;
                Monotonic.pop();
                i--;
            }
        }
        return result;
    }
};
