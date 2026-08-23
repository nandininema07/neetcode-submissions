class Solution {
public:
    bool isAnagram(string s, string t) {
        //OPTIMAL
        unordered_map<char,int> count;
        if(s.length()!=t.length())  return false;
        for(char elem:s)    count[elem]++;
        for(char elem:t){
            count[elem]--;
            if(count[elem]<0)   return false;
        }
        return true;       


        //O(2n) space complexity
        // unordered_map<char,int> h1;
        // unordered_map<char,int> h2;
        // for(char elem:s)   h1[elem]++;
        // for(char elem:t)   h2[elem]++;

        // for(char c:t){
        //     if(!h2.contains(c))     return false;
        //     if(h1[c]!=h2[c])    return false;
        // }
        // for(char c:s){
        //     if(!h2.contains(c))     return false;
        //     if(h1[c]!=h2[c])    return false;
        // }
        // return true;
    }
};
