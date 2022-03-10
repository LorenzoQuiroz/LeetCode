class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // the low index starts at 0
        int low = 0;
        // the high index starts at the size of the vector nums
        int high = nums.size();
        // the middle index
        int middle;
        // while the low index is less than the high index
        while (low < high)
        {
            // the middle index is assigned between the low index and the high index
            middle = (low + high) / 2;
            // if the value at the middle index equals the targe value
            if (nums[middle] == target)
            {
                // return the middle index
                return middle;
            }
            // if the value at the middle index is less than the target
            if (nums[middle] < target)
            {
                // reassign the low index to one after the middle index
                low = middle + 1;
            }
            // else the value at the middle index is greater than the target
            else
            {
                // reassign the high index to the middle index
                high = middle;
            }
        }
        // return the low index
        return low;
    }
};