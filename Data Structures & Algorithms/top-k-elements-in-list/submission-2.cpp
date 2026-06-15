class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
          map1[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto& [num,count]: map1){
            pq.push({count, num});
        }

        for(int i=0;i<k;i++){
          ans.push_back(pq.top().second);
          pq.pop();
        }
        return ans;
    }
};
