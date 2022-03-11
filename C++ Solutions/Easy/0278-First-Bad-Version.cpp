// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // the low index starts at 1
        int low = 1;
        // the high index starts at n
        int high = n;
        // the middle index
        int middle;
        // while the low index is less than the high index
        while (low < high)
        {
            // the middle index is assigned between the low index and the high index
            middle = low + (high - low) / 2;
            // if the middle index is a bad version
            if (isBadVersion(middle))
            {
                // reassign the high index to the middle index
                high = middle;
            }
            // else the middle index is not a bad version
            else
            {
                // reassign the low index to one after the middle index
                low = middle + 1;
            }
        }
        // return the low index
        return low;
    }
};