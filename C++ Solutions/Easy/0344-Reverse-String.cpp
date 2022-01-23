class Solution {
public:
    void reverseString(vector<char>& s) {
        // iterate through vector s with index i going from left-to-right and index j going from right-to-left
        for (int i = 0, j = s.size() - 1; i < j; i++, j--)
        {
            // swap the values at opposite indices
            swap(s[i], s[j]);
        }
    }
};