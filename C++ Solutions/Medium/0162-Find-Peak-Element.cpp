class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // left index at left end
        int left = 0;
        // right index at right end
        int right = nums.size() - 1;
        // middle index
        int middle;
        // while the left and right indices don't overlap (Binary Search Method)
        while (left < right)
        {
            // assign middle index between left and right index
            middle = (left + right) / 2;
            // if middle value is greater than the value to the right
            if (nums[middle] > nums[middle+1])
            {
                // remove the right half of the values
                right = middle;
            }
            // else the middle value is less than the value to the right
            else
            {
                // remove the left half of the values, including the middle (smaller) value
                left = middle + 1;
            }
        }
        // return the left index, which is at a peak element
        return left;
    }
};