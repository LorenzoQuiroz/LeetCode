class Solution {
public:
    bool isPalindrome(string s) {
        // if s is an empty string or a single char
        if (s.size() == 0 || s.size() == 1)
        {
            // the string is a palindrome
            return true;
        }
        // vector c1 will store the alphanumeric phrase from left-to-right
        vector<char> c1;
        // vector c2 will store the alphanumeric phrase from right-to-left
        vector<char> c2;
        // iterate through the string s with index i starting at the left end and index j starting at the right end
        for (int i = 0, j = s.size() - 1; i < s.size(); i++, j--)
        {
            // if the char at index i is alphanumeric (no spaces allowed)
            if (isalnum(s[i]))
            {
                // add the element's lowercase equivalent to c1
                c1.push_back(tolower(s[i]));
            }
            // if the char at index j is alphanumeric (no spaces allowed)
            if (isalnum(s[j]))
            {
                // add the element's lowercase equivalent to c2
                c2.push_back(tolower(s[j]));
            }
        }
        // if the left-to-right phrase is equal to the right-to-left phrase
        if (c1 == c2)
        {
            // the string is a palindrome
            return true;
        }
        // else the phrases are not equal
        else
        {
            // the string is not a palindrome
            return false;
        }
    }
};