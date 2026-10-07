class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>> cars;
        for(int i=0;i<n;i++){
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.begin(), cars.end(), greater<>());
        double last_time = 0;
        int fleets = 0;
        for(auto& [pos,spd] : cars){
            double t = (double)(target - pos) / spd;
            if (t > last_time){
                fleets +=1;
                last_time = t;
            }
        }
        return fleets;
    }
};
