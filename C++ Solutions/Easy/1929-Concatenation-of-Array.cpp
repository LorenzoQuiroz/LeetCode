class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // get the size of the vector nums
        int size = nums.size();
        // iterate through the vector nums, up to its original size, using index i
        for (int i = 0; i < size; i++)
        {
            // add each value to the end of the vector
            nums.push_back(nums[i]);
        }
        // return the modified vector
        return nums;
    }
};