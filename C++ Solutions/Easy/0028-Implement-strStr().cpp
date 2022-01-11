class Solution {
public:
    int strStr(string haystack, string needle) {
        // if needle is an empty string
        if (needle == "")
        {
            return 0;
        }
        // index value initialized to -1 and won't change if needle isn't found in haystack
        int index = -1;
        // find index of first occurrence of needle in haystack
        index = haystack.find(needle);
        // return the index of needle (-1 if not found)
        return index;
    }
};