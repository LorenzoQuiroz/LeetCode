class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // set current profit value to 0
        int cur = 0;
        // set max profit value to 0
        int max = 0;
        // iterate through the vector prices with index i, starting at the 2nd value
        for (int i = 1; i < prices.size(); i++)
        {
            // get the current profit by adding the difference between current value and previous value
            cur += prices[i] - prices[i-1];
            // if the current profit is a loss
            if (cur < 0)
            {
                // reset profits
                cur = 0;
            }
            // if the current profit is greater than the max profit
            if (cur > max)
            {
                // set max profit to current profit
                max = cur;
            }
        }
        // return the max profit
        return max;
    }
};