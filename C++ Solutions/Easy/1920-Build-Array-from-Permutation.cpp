class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        // n will be the size of the vector nums
        int n = nums.size();
        // a vector of integers of size n will all be assigned the value 0
        vector<int> ans(n, 0);
        // iterate through the vector nums using index i
        for (int i = 0; i < n; i++)
        {
            // build the vector ans using the vector nums
            ans[i] = nums[nums[i]];
        }
        // return the vector ans
        return ans;
    }
};