class Solution {
public:
    void soln(vector<int>& nums, int idx, vector<vector<int>>& allPermut){
        if(idx==nums.size()){
            allPermut.push_back({nums});
            return;
        }

        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            soln(nums,idx+1,allPermut);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> allPermut;
        soln(nums,0,allPermut);
        return allPermut;        
    }
};