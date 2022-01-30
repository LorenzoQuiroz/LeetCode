class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort the vector nums from beginning to end in ascending order
        sort(nums.begin(), nums.end());
        // iterate through the vector nums using index i
        for (int i = 0; i < nums.size(); i++)
        {
            // if the value doesn't equal its index
            if (nums[i] != i)
            {
                // return the missing number, its index
                return i;
            }
        }
        // return the missing number, its size
        return nums.size();
    }
};