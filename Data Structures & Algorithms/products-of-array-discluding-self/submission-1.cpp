class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int  n = nums.size();
        int pref[n] , suff[n];
        pref[0] = 1;
        suff[n-1] = 1;
        vector<int> ans;
        for(int i = 1;i<n;i++){
            int j = n-i-1;
            pref[i] = pref[i-1]*nums[i-1];
            suff[j] = suff[j+1]*nums[j+1];
            j--;
        } 

        for(int i =0;i<n;i++){
            ans.push_back(pref[i]*suff[i]);
        }

    return ans;
    }
};
