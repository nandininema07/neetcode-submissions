class Solution {
public:
    void soln(int n, string ans, vector<string>& Result, int open, int close){
        if(ans.size()==2*n){
            Result.push_back(ans);
            return;
        }

        if(open<n){
            soln(n,ans+"(",Result,open+1,close);
        }
        if(close<open){
            soln(n,ans+")",Result,open,close+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> Result;
        soln(n,"",Result,0,0);
        return Result;
    }
};
