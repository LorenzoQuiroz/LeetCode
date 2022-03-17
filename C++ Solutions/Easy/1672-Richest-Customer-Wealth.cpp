class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        // initialize the max wealth with the minimum integer value
        int maxWealth = INT_MIN;
        // iterate through each customer account using index i
        for (int i = 0; i < accounts.size(); i++)
        {
            // initialize sum to 0
            int sum = 0;
            // iterate through each bank within a customer account using index j
            for (int j = 0; j < accounts[0].size(); j++)
            {
                // add the money in each bank
                sum += accounts[i][j];
            }
            // have the max wealth be the max value between the current max wealth and the sum of a customer's banks
            maxWealth = max(maxWealth, sum);
        }
        // return the max wealth
        return maxWealth;
    }
};