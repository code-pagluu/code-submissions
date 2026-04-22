class Solution {
public:

    string encode(vector<string>& strs) {
        int n = strs.size();
        string res="";
        for(int i=0;i<n;i++){
            res+=strs[i]+";";
        }
        return res;
    }

    vector<string> decode(string s) {
        int n = s.size();
        vector<string>ans;
        string temp="";
        for(int i =0;i<n;i++){
            if(s[i]!=';'){
                temp +=s[i];
            }
            else{
                ans.push_back(temp);
                temp = "";
            }
        }
        return ans;
    }
};
