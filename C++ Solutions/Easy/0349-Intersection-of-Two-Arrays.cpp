class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // vector of integers, intersection, will be holding the intersection of the 2 vectors, nums1 and nums2
        vector<int> intersection;
        // sort the entire vector nums1 in ascending order
        sort(nums1.begin(), nums1.end());
        // sort the entire vector nums2 in ascending order
        sort(nums2.begin(), nums2.end());
        // index i for iterating through nums1
        int i = 0;
        // index j for iterating through nums2
        int j = 0;
        // while both indices i and j have not reached the end of their respective vector
        while (i < nums1.size() && j < nums2.size())
        {
            // if nums1[i] is greater than nums2[j]
            if (nums1[i] > nums2[j])
            {
                // increment index j
                j++;
            }
            // if nums1[i] is less than nums2[j]
            else if (nums1[i] < nums2[j])
            {
                // increment index i
                i++;
            }
            // else nums1[i] is equal to nums2[j]
            else
            {
                // if after searching the entire vector intersection for nums[i], the count is zero
                if (count(intersection.begin(), intersection.end(), nums1[i]) == 0)
                {
                    // add nums1[i] to the end of the vector intersection
                    intersection.push_back(nums1[i]);
                }
                // increment index i
                i++;
                // increment index j
                j++;
            }
        }
        // return the vector of integers, intersection
        return intersection;
    }
};