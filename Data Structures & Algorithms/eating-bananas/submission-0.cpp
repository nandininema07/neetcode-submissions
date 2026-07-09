class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        //lower bound=1
        //upper bound= sum of all elements
        int low=1;
        int high=*std::max_element(piles.begin(), piles.end());
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long totalHrs=0;
            for(int banana:piles){
                totalHrs+=(banana+mid-1)/mid;
            }
            if(totalHrs<=h){
                ans=mid;
                high=mid-1;
            }
            else    low=mid+1;
        }
        return ans;
    }
};
