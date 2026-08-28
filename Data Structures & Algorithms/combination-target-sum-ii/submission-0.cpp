class Solution {
public:
    void soln(vector<int>& candidates, int target, int idx, vector<int>& combin, vector<vector<int>>& Result){
        if(target==0){
            Result.push_back(combin);
            return;
        }
        
        if(idx==candidates.size() || target<0)  return;
        

        for(int i=idx;i<candidates.size();i++){
            if(i>idx && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target)    break;
            
            combin.push_back(candidates[i]);
            soln(candidates,target-candidates[i],i+1,combin,Result);
            combin.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> combin;
        vector<vector<int>> Result;
        sort(candidates.begin(),candidates.end());
        soln(candidates,target,0,combin,Result);
        return Result;
    }
};
