class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        map<char,int>sp;
        map<char,int>tp;
        for(int i =0;i<s.size();i++){
            sp[s[i]]++;
            tp[t[i]]++;

        }
        if(sp == tp){
            return true;
        }
        return false;
    }
};
