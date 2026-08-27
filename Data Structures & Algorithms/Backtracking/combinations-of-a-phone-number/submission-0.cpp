class Solution {
public:
    void soln(string digits, int idx, string& ans, vector<string>& Result, vector<string>& symbols){
        if(idx==digits.size()){
            Result.push_back(ans);
            return;
        }
        string letter=symbols[digits[idx]-'0'];
        for(char c : letter){
            ans.push_back(c);
            soln(digits,idx+1,ans,Result,symbols);
            ans.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> Result;
        vector<string> symbols={
            "", //0
            "", //1
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"
        };
        string ans="";
        soln(digits,0,ans,Result,symbols);
        return Result;
    }
};
