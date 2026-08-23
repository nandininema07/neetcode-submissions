class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> h;
        int n=nums.size();
        for(int elem:nums){
            h[elem]++;
        }
        for(const auto& p:h){
            if((p.second)>1)
            return true;
        }
        return false;
    }
};