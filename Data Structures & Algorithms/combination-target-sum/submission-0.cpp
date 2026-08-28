class Solution {
public:
    void soln(vector<int>& nums, int target, int idx, vector<int>& combin, vector<vector<int>>& Result){
        if(idx==nums.size() || target<0)    return;
        if(target==0){
            Result.push_back(combin);
            return;
        }

        combin.push_back(nums[idx]);
        soln(nums,target-nums[idx],idx,combin,Result);
        combin.pop_back();

        soln(nums,target,idx+1,combin,Result);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> combin;
        vector<vector<int>> Result;
        soln(nums,target,0,combin,Result);
        return Result;
    }
};
