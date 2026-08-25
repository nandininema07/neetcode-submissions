class Solution {
public:
    bool isPalin(string s){
        string s2=s;
        reverse(s2.begin(),s2.end());
        if(s2==s)   return true;
        return false;
    }

    void soln(string s, vector<string>& partition, vector<vector<string>>& Result){
        if(s.size()==0){
            Result.push_back({partition});
            return;
        }

        for(int i=0;i<s.size();i++){
            string part=s.substr(0,i+1);
            if(isPalin(part)){
                partition.push_back(part);
                soln(s.substr(i+1),partition,Result);
                partition.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> partition;
        vector<vector<string>> Result;
        soln(s,partition,Result);
        return Result;
    }
};
