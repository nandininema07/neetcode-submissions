class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0,diff=0;
        int ptr1=0, ptr2=1;
        while(ptr2!=n){
            if(prices[ptr1]>prices[ptr2]){
                ptr1=ptr2;
                ptr2++;
            }
            else{
                diff=prices[ptr2]-prices[ptr1];
                profit=max(profit,diff);
                ptr2++;
            }
        }
        return profit;
    }
};
//error: prices=[2,1,2,1,0,1,2]
//My output=1, correct output=2;