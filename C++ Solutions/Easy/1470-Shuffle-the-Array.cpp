class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // s will contain the shuffled vector of integers
        vector<int> s;
        // iterate through the vector nums up to n, the halfway point
        for (int i = 0; i < n; i++)
        {
            // add nums[i] to the end of s
            s.push_back(nums[i]);
            // add nums[i+n] to the end of s
            s.push_back(nums[i+n]);
        }
        // return the shuffled vector of integers
        return s;
    }
};