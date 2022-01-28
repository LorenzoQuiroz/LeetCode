class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // unordered set s for storing unique elements
        unordered_set<int> s;
        // iterate through the vector nums with index i
        for (int i = 0; i < nums.size(); i++)
        {
            // if nums[i] is found in s
            if (s.find(nums[i]) != s.end())
            {
                // nearby duplicate found
                return true;
            }
            // insert unique value nums[i] into s
            s.insert(nums[i]);
            // to only keep the latest k elements in s, check if the index is greater than k
            if (i >= k)
            {
                // remove the left-most value (FIFO method)
                s.erase(nums[i-k]);
            }
        }
        // no nearby duplicate found
        return false;
    }
};