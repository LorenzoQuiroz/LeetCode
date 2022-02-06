class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        // create a string solution with the same size as s and filled with '_' 
        string solution(s.size(), '_');
        // iterate through the string s and vector indices using index i
        for (int i = 0; i < s.size(); i++)
        {
            // the value at indices[i] will be used as the index for the string solution.
            // this index will be assigned the current char at s[i]
            solution[indices[i]] = s[i];
        }
        // return the string solution
        return solution;
    }
};