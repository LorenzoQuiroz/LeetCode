class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // vector of integers for holding how many values are smaller for each number
        vector<int> smaller;
        // integer counter for keeping track on how many values are smaller
        int counter;
        // iterate through the vector nums using index i
        for (int i = 0; i < nums.size(); i++)
        {
            // reset the counter to zero
            counter = 0;
            // iterate through the vector nums using index j
            for (int j = 0; j < nums.size(); j++)
            {
                // if indices j and i are equal
                if (j == i)
                {
                    // continue to the next iteration within the loop
                    continue;
                }
                // if the value at nums[j] is smaller than the value at nums[i]
                if (nums[j] < nums[i])
                {
                    // increment the counter
                    counter++;
                }
            }
            // add the counter to the end of the vector smaller
            smaller.push_back(counter);
        }
        // return the vector smaller, holding how many values are smaller for each number
        return smaller;
    }
};