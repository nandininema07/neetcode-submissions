class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Using hashmap
        unordered_map<int,int> h;
        //for(int i:nums) h[i]++; counts frequency

        for(int i=0;i<nums.size();i++){
            int complement= target-nums[i];
            if(h.count(complement))  return {h[complement],i};

            h[nums[i]]=i;
        }
        return {};


        //TWO POINTERS NOT WORKING FOR NEGATIVE NUMBERS- WHY?
        // int n=nums.size();
        // int l=0;
        // int r=n-1;
        // while(l<r){
        //     int sum=nums[l]+nums[r];
        //     if(sum==target) return {l,r};
        //     if(nums[l]+nums[r]<target)  l++;
        //     if(nums[l]+nums[r]>target)  r--;
        // }
        // return {};
    }
};
