class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256,-1);
        int start=0,best=0;
        for(int i=0;i<s.size();i++){
            start=max(start, last[s[i]] +1);
            best=max(best,i-start+1);
            last[s[i]]=i;

        }
        return best;
        
    }
};
