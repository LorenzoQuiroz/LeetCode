class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // sort the entire vector nums in ascending order
        sort(nums.begin(), nums.end());
        // iterate through the vector nums starting from the left end to one element before the right end with index i
        for (int i = 0; i < nums.size() - 1; i += 2)
        {
            // if the value at the current index does not equal the value on the right
            if (nums[i] != nums[i+1])
            {
                // return the single appearance at the current index
                return nums[i];
            }
        }
        // return the single appearance at the right end of the vector nums
        return nums[nums.size() - 1];
    }
};