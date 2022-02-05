class Solution {
public:
    vector<string> fizzBuzz(int n) {
        // vector solution holding strings
        vector<string> solution;
        // iterate through the integers, starting at 1 and ending at n
        for (int i = 1; i <= n; i++)
        {
            // if i is divisible by 3 and 5
            if (i % 3 == 0 && i % 5 == 0)
            {
                // add the string "FizzBuzz" to the end of the vector
                solution.push_back("FizzBuzz");
            }
            // else if i is divisible by 3
            else if (i % 3 == 0)
            {
                // add the string "Fizz" to the end of the vector
                solution.push_back("Fizz");
            }
            // else if i is divisible by 5
            else if (i % 5 == 0)
            {
                // add the string "Buzz" to the end of the vector
                solution.push_back("Buzz");
            }
            // else i is not divisible by 3 or 5
            else
            {
                // add the current integer as a string to the end of the vector
                solution.push_back(to_string(i));
            }
        }
        // return the vector solution
        return solution;
    }
};