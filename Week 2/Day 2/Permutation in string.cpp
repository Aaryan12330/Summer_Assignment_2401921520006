class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        vector <int> a(26,0) ,b(26,0);
        for(char c:s1)
        a[c-'a']++;
        for(int i=0;i<s2.size();i++) {
            b[s2[i]-'a']++;
            if(i>=n)
            b[s2[i-n] -'a']--;
            if(a==b)
            return true;
        }
        return false;
        
    }
};
