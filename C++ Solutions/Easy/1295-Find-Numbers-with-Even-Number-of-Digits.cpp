class Solution {
public:
    int findNumbers(vector<int>& nums) {
        // total number of even numbers
        int t = 0;
        // iterate through the vector nums using index i
        for (int i = 0; i < nums.size(); i++)
        {
            // convert and assign the value at index i to string
            string s = to_string(nums[i]);
            // if the size of the string is even
            if (s.size() % 2 == 0)
            {
                // increment total number of even numbers
                t++;
            }
        }
        // return total number of even numbers
        return t;
    }
};