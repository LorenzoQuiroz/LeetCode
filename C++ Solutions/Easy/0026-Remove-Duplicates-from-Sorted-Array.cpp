class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // when there's an empty vector
        if (nums.size() == 0)
        {
            // there's 0 unique integers
            return 0;
        }
        // left index starts at 0; also used as a counter
        int left = 0;
        // iterate through the vector with the right index starting at 1
        for (int right = 1; right < nums.size(); right++)
        {
            // if the integers are different
            if (nums[left] != nums[right])
            {
                // increment the left index
                left++;
            }
            // assign the value at the left index to be the value at the right index
            nums[left] = nums[right];
        }
        // return the number of unique integers using left index + 1
        return left + 1;
    }
};