class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for (int x : nums) mp[x]++;

        vector<vector<int>> buckets(nums.size() + 1);
        for(auto [num,freq] : mp){
            buckets[freq].push_back(num);
        }

        vector<int> ans;
        for(int f = buckets.size()-1; f>=0 && ans.size()<k; f-- ){
            for(int num : buckets[f]){
                ans.push_back(num);
                if(ans.size() == k) break;
            }
        }
        return ans;
    }
};
