class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> map;
        int res = 0;
        int l = 0, maxf = 0;
        for(int r=0;r<s.size();r++){
            map[s[r]]++;
            maxf = max(maxf, map[s[r]]);

            if((r-l+1)-maxf > k){
                map[s[l]]--;
                l++;
            }
            res = max(res, (r-l+1));
        }
        return res;
    }
};
