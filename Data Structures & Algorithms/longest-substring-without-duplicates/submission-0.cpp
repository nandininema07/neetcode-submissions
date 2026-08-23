class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int l=0;
        int n=s.length();
        int maxcount=0;
        
        for(int r=0;r<n;r++){
            while(st.contains(s[r])){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            maxcount=max(maxcount,r-l+1);
        }

        return maxcount;
    }
};