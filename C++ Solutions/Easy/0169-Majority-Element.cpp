class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort the vector nums from beginning to end in ascending order
        sort(nums.begin(), nums.end());
        // assign majority count to be half the size of the vector nums
        int m = nums.size() / 2;
        // assign counter to be 1
        int c = 1;
        // iterate through the vector nums, starting at the second element, using index i
        for (int i = 1; i < nums.size(); i++)
        {
            // if the left value does not equal the current value
            if (nums[i-1] != nums[i])
            {
                // reset counter to 1
                c = 1;
            }
            // else the values match
            else
            {
                // increment counter
                c++;
            }
            // if the counter is greater than the majority counter
            if (c > m)
            {
                // return the majority value
                return nums[i];
            }
        }
        // return the one and only element
        return nums[0];
    }
};