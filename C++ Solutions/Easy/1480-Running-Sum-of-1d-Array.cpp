class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // iterate through the vector nums with index i, starting at the second position
        for (int i = 1; i < nums.size(); i++)
        {
            // the value at the current index is the sum of its current value plus the left value in the vector
            nums[i] += nums[i-1];
        }
        // return the modified vector
        return nums;
    }
};