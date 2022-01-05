class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // solution string
        string longest = "";
        // index j for the vector's first string
        int j = 0;
        // while the index j is within the vector's first string 
        while (j < strs[0].size())
        {
            // of the vector's first string, add the char of index j
            longest.push_back(strs[0][j]);
            // iterate through the vector of strings strs
            for (int i = 0; i < strs.size(); i++)
            {
                // if the solution's index j does not match a vector's index j
                if (longest[j] != strs[i][j])
                {
                    // remove the char being compared
                    longest.pop_back();
                    // return solution
                    return longest;
                }
            }
            // increment index j
            j++;
        }
        // return solution
        return longest;
    }
};