class Solution {
public:
    bool isPalindrome(int x) {
        // if x is a negative number
        if (x < 0)
        {
            // the integer is not a palindrome
            return false;
        }
        // convert int x to string s
        string s = to_string(x);
        // reversed string r is assigned ""
        string r = "";
        // iterate through the string from right-to-left with index i
        for (int i = s.size() - 1; i >= 0; i--)
        {
            // add the char at index i to the reversed string r
            r += s[i];
        }
        // if the left-to-right string is equal to the right-to-left string
        if (s == r)
        {
            // the integer is a palindrome
            return true;
        }
        // else the strings are not equal
        else
        {
            // the integer is not a palindrome
            return false;
        }
    }
};