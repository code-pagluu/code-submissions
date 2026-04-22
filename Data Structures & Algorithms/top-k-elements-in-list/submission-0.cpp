class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        vector<pair<int, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        vector<int> ans;
        for(int  i =0;i<k;i++){
            ans.push_back(vec[i].first);
        }

        return ans;
    }
};
