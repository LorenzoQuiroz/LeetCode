class Solution
{
    public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        // solution vector initialized with the size of the nums vector
        vector<int> solutionV(nums.size());
        // leftmost index at 0 and rightmost index at the size of the vector - 1
        int left = 0, right = nums.size() - 1;
        // iterate through the solution vector from right to left with index k
        for (int k = nums.size() - 1; k >= 0; k--)
        {
            // if the absolute value of the right index is greater than the absolute value of the left index
            if (abs(nums[right]) > abs(nums[left]))
            {
                // the solution vector's value at index k is the value at the right index squared, then decrement the right index
                solutionV[k] = nums[right] * nums[right--];
            }
            // else the absolute value of the right index is less than or equal to the absolute value of the left index
            else
            {
                // the solution vector's value at index k is the value at the left index squared, then increment the left index
                solutionV[k] = nums[left] * nums[left++];
            }
        }
        // return the solution vector
        return solutionV;
    }
};