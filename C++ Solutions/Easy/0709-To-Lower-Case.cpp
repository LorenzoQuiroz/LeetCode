class Solution {
public:
    string toLowerCase(string s) {
        // assign d to be the difference in decimal value between the two ASCII values 'a' and 'A'
        int d = 'a' - 'A';
        // iterate through string s using index i
        for (int i = 0; i < s.size(); i++)
        {
            // if s[i] is an uppercase letter
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                // change the value to its respective lowercase letter by adding the difference
                s[i] += d;
            }
        }
        // return the string s
        return s;
    }
};