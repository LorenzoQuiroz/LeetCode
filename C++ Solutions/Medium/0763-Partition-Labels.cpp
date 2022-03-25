class Solution {
public:
    vector<int> partitionLabels(string s) {
        // create a vector of integers, charLastOccurrence, that is of size 26, all with the value of 0.
        // each integer will keep track of the last occurrence of its corresponding char.
        // EXAMPLE: s[0]  is the index of the last occurrence of 'a' within string s,
        //      and s[25] is the index of the last occurrence of 'z' within string s
        vector<int> charLastOccurrence(26, 0);
        // traverse through the string s using index i
        for (int i = 0; i < s.size(); i++)
        {
            // store the current index, i, at its corresponding position within the vector, charLastOccurrence,
            // when you subtract 'a' from the char at s[i] to get the ASCII value in decimal form
            charLastOccurrence[s[i] - 'a'] = i;
        }
        
        // vector of integers, result, will store the lengths of each partition
        vector<int> result;
        // the start pointer and the end pointer will begin at 0
        int start = 0, end = 0;
        // traverse through the string s using index i
        for (int j = 0; j < s.size(); j++)
        {
            // the end pointer will be placed at the greater value of the following comparison:
            // end or the value of the char's last occurrence
            end = max(end, charLastOccurrence[s[j] - 'a']);
            // if the current index, j, is equal to the end pointer
            if (j == end)
            {
                // add the length of the partition by adding 1 to the index j and subtracting the start pointer
                result.push_back(j + 1 - start);
                // update the start pointer to be 1 after index j
                start = j + 1;
            }
        }
        
        // return the vector of integers, result, storing the lengths of each partition
        return result;
    }
};