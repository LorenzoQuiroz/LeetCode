class Solution
{
    public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        // counter for consecutive ones
        int c = 0;
        // max counter for consecutive ones
        int max = 0;
        // iterate through the vector nums with index i
        for (int i = 0; i < nums.size(); i++)
        {
            // if the value at index i is 1
            if (nums[i] == 1)
            {
                // increment the counter
                c++;
            }
            // else the value at index i is 0
            else
            {
                // reset counter
                c = 0;
            }
            // if the counter is greater than the max counter
            if (c > max)
            {
                // assign the max counter to be the current counter
                max = c;
            }
        }
        // return the max counter
        return max;
    }
};