class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort the entire string s in ascending order
        sort(s.begin(), s.end());
        // sort the entire string t in ascending order
        sort(t.begin(), t.end());
        // if string s and string t are equal
        if (s == t)
        {
            // string t is an anagram of string s
            return true;
        }
        // else string s and t are not equal
        else
        {
            // string t is not an anagram of string s
            return false;
        }
    }
};