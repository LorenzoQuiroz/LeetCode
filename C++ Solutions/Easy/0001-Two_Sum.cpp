class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // solution vector
        vector<int> v;
        // leftmost index starts at 0
        int leftmost = 0;
        // always loop
        while(true)
        {
            // iterate through the nums vector using index i
            for (int i = 0; i < nums.size(); i++)
            {
                // if the 2 indices are the same
                if (leftmost == i)
                {
                    // continue to the next iteration
                    continue;
                }
                // if the value at the different indices equals the target value
                if (nums[leftmost] + nums[i] == target)
                {
                    // add the 2 indices to the solution vector v
                    v.push_back(leftmost);
                    v.push_back(i);
                    // return the solution
                    return v;
                }
            }
            // increment the leftmost index
            leftmost++;
        }
    }
};