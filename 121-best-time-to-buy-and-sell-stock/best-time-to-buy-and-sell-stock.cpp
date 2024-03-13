class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int sell = 0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<buy)
            {
                buy = prices[i];
            }
            if(sell<prices[i]-buy)
            {
                sell=prices[i]-buy;
            }
        }
        return sell;
    }
};