class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // sort the entire vector nums in ascending order
        sort(nums.begin(), nums.end());
        // iterate through the vector nums with index i, starting from the left end to one element before the right end
        for (int i = 0; i < nums.size() - 1; i++)
        {
            // if the values match
            if (nums[i] == nums[i+1])
            {
                // a duplicate was found
                return true;
            }
        }
        // no duplicate was found
        return false;
    }
};