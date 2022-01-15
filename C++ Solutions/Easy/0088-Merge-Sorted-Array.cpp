class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // n1 index at the end of nums1's ordered values
        int n1 = m - 1;
        // n2 index at the end of nums2's ordered values
        int n2 = n - 1;
        // i index at the end of nums1's entire vector
        int i = m + n - 1;
        // while index n2 is within nums2's vector (meaning there's still values to read)
        while (n2 >= 0)
        {
            // if index n1 is within nums1's vector AND the value at nums1[n1] is greater than the value at nums2[n2]
            if (n1 >= 0 && nums1[n1] > nums2[n2])
            {
                // assign index n1's value at the current rightmost index i in nums1
                nums1[i] = nums1[n1];
                // decrement index n1
                n1--;
                // decrement index i to assign the next greatest value
                i--;
            }
            // else there's no more values to compare with index n1 OR the value at nums1[n1] is less than or equal to the value at nums2[n2]
            else
            {
                // assign index n2's value at the current rightmost index i in nums1
                nums1[i] = nums2[n2];
                // decrement index n2
                n2--;
                // decrement index i to assign the next greatest value
                i--;
            }
        }
    }
};