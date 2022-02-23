class Solution {
public:
    bool isSubsequence(string s, string t) {
        // if string s is an empty string
        if (s == "")
        {
            // string s is a subsequence of string t
            return true;
        }
        // index ss for iterating through the string s
        int ss = 0;
        // iterate through the string t using index tt
        for (int tt = 0; tt < t.size(); tt++)
        {
            // using the indices ss and tt, if the values within their respective strings are the same
            if (s[ss] == t[tt])
            {
                // increment ss index
                ss++;
                // if the ss index has reached the end of string s
                if (ss == s.size())
                {
                    // string s is a subsequence of string t
                    return true;
                }
            }
        }
        // string s is not a subsequence of string t
        return false;
    }
};