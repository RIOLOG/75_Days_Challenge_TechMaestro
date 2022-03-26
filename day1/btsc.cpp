//best time to sell stock:
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        int i=0;
        int j=1;
        int profit=0;
        while(i<n and j<n)
        {
            if (prices[i]<=prices[j])
            {
                profit=max(profit,prices[j]-prices[i]);
                j+=1;
            }
            else
            {
                i+=1;
            }
        }
        return profit;
    }
};
