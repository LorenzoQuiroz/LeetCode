class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // initalize largest as INT_MIN
        int largest = INT_MIN;
        // initialize sum as 0
        int sum = 0;
        // iterate through the int vector nums with index i
        for (int i = 0; i < nums.size(); i++)
        {
            // add current integer value at index i into sum
            sum += nums[i];
            // have largest be the max value of largest or sum
            largest = max(largest, sum);
            // have sum be the max value of sum or 0
            sum = max(sum, 0);
        }
        // return the largest sum
        return largest;
    }
};