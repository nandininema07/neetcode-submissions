class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string clean="";
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                clean+=tolower(s[i]);
            }
        }
        cout<<clean;
        int c=clean.size();
        for(int i=0;i<c;i++){
            if(clean[i]!=clean[c-i-1]) return false;
        }
        return true;
    }
};
