class Solution {
public:
    int lengthOfLastWord(string s) {
        // counts the length of the last word
        int counter = 0;
        // iterate through the string s, from right to left, using index i
        for (int i = s.size() - 1; i >= 0; i--)
        {
            // if the value is an alphabetic letter
            if (isalpha(s[i]))
            {
                // increment the counter
                counter++;
            }
            // else if the value is not an alphabetic letter and the counter is greater than 0
            else if (!isalpha(s[i]) && counter > 0)
            {
                // return the length of the last word
                return counter;
            }
        }
        // return the length of the word
        return counter;
    }
};