class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> h1;
        unordered_map<char,int> h2;
        for(char elem:s)   h1[elem]++;
        for(char elem:t)   h2[elem]++;

        for(char c:t){
            if(!h2.contains(c))     return false;
            if(h1[c]!=h2[c])    return false;
        }
        return true;
    }
};
