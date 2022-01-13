class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // iterate from right to left through the vector digits with index i
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            // if the value at index i is not 9
            if (digits[i] != 9)
            {
                // increment the value
                digits[i]++;
                // return the vector
                return digits;
            }
            // else the value at index i is 9
            else
            {
                // change the value to a 0
                digits[i] = 0;
            }
        }
        // at this point, every digit is a 0, so make the first digit a 1
        digits[0] = 1;
        // and add a 0 at the end of the vector
		digits.push_back(0);
        // return the vector
        return digits;
    }
};