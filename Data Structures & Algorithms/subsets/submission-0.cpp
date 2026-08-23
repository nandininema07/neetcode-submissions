class Solution {
public:
    void soln(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets){
        //base case
        if(i==nums.size()){
            allSubsets.push_back({ans});   //Pass all values of ans as a vector
            return;
        }

        ans.push_back(nums[i]);
        soln(nums,ans,i+1,allSubsets);
        ans.pop_back(); //backtracking
        soln(nums,ans,i+1,allSubsets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> ans;
        soln(nums,ans,0,allSubsets);
        return allSubsets;
    }
};
