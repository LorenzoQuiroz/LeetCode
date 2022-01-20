class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // index r at right end of vector nums
        int r = nums.size() - 1;
        // iterate through the vector nums with index i
        for (int i = 0; i < nums.size(); i++)
        {
            // while the value at nums[i] is equal to val
            while (nums[i] == val)
            {
                // assign INT_MIN to hide the value
                nums[i] = INT_MIN;
                // swap INT_MIN value with the value at the right end of the vector
                swap(nums[i], nums[r]);
                // decrement r index (to avoid swapping with INT_MIN)
                r--;
            }
        }
        // return the size of the vector that were not occurrences of val
        return r + 1;
    }
};