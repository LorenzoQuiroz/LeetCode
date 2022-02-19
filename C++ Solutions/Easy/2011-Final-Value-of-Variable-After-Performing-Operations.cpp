class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        // output value
        int output = 0;
        // iterate through the vector operations using index i
        for (int i = 0; i < operations.size(); i++)
        {
            // if the string is ++X or X++
            if (operations[i] == "++X" || operations[i] == "X++")
            {
                // increment the value
                output++;
            }
            // else the string is --X or X--
            else
            {
                // decrement the value
                output--;
            }
        }
        // return the output value
        return output;
    }
};