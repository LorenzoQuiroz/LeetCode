class Solution {
public:
    int firstUniqChar(string s) {
        // create an integer vector alphabet of size 26 (for every lowercase letter) with all values as 0
        vector<int> alphabet(26, 0);
        
        /* * *
        *  To use an array instead of a vector...
        *  create an integer array alphabet of size 26 (for every lowercase letter) with all values as 0
        *  int alphabet[26] = {0};
         * * */
        
        // iterate through the string s with index i
        for (int i = 0; i < s.size(); i++)
        {
            // each integer in alphabet is a counter for its respective letter
            alphabet[s[i]-'a']++;
        }
        // iterate through the string s with index j
        for (int j = 0; j < s.size(); j++)
        {
            // if the counter for its respective letter is 1
            if (alphabet[s[j]-'a'] == 1)
            {
                // return the index of this first non-repeating character
                return j;
            }
        }
        // if non-repeating characters do not exist, return -1
        return -1;
    }
};