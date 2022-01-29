class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // left-most index starting at 0
        int left = 0;
        // iterate through the vector nums using index i
        for (int i = 0; i < nums.size(); i++)
        {
            // if the value is not zero
            if (nums[i] != 0)
            {
                // swap the value at the left-most index with the value that is not zero
                swap(nums[left], nums[i]);
                // increment the left-most index
                left++;
            }
        }
    }
};