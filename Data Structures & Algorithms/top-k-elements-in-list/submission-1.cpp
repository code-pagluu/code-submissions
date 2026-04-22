class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // using hashmap
        // int n = nums.size();
        // unordered_map<int, int>mp;
        // for(auto i: nums){
        //     mp[i]++;
        // }
        // vector<pair<int, int>> vec(mp.begin(), mp.end());
        // sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        //     return a.second > b.second;
        // });

        // vector<int> ans;
        // for(int  i =0;i<k;i++){
        //     ans.push_back(vec[i].first);
        // }

        // return ans;

        // using min heap
        int n = nums.size();
        unordered_map<int, int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>, vector<pair<int , int>>, greater<pair<int, int>>> pq;
        for(auto& i : mp){
            pq.push({i.second, i.first});
            if(pq.size()>k){
                pq.pop();
            }
        }

        vector<int> ans;
        for(int  i =0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
