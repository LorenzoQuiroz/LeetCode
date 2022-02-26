class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // total number of good pairs
        int total = 0;
        // iterate through the vector nums, up to 1 less than the last value, using index i
        for (int i = 0; i < nums.size() - 1; i++)
        {
            // index j is assigned to the value to the right
            int j = i + 1;
            // while index j hasn't reached the end of the vector nums
            while (j < nums.size())
            {
                // if nums[i] and nums[j] are equal
                if (nums[i] == nums[j])
                {
                    // increment total number of good pairs
                    total++;
                }
                // increment index j
                j++;
            }
        }
        // return the total number of good pairs
        return total;
    }
};