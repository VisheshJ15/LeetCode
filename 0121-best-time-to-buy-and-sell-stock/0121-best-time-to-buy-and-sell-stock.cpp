class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int profit=0;
        int MinPrice=prices[0];
        for(int i=0;i<prices.size();i++){
             MinPrice=min(MinPrice,prices[i]);
            profit=prices[i]-MinPrice;
            if(profit>max){
                max=profit;
            }
        }
        return max;
    }
};