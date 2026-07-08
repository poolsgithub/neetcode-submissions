class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int fleet = 0;
        int n = position.size();
        
        stack<float> time;
        map<int, float, greater<int>> pt;
        
        for(int i = 0; i < n; i++){
            float t = float(target - position[i]) / float(speed[i]) ;
            pt[position[i]] = t;
        }

        for(auto it : pt){
            if(time.empty()){
                time.push(it.second);
                fleet++;
                continue;
            }
            if(it.second > time.top()){
                time.push(it.second);
                fleet++;
            }
        }

        return fleet;
    }
};
