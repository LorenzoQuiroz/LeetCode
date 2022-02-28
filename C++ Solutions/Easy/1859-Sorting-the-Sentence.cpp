class Solution {
public:
    string sortSentence(string s) {
        // a shuffled sentence will contain no more than 9 words, so a vector of strings, called positions, will have a size of 10, with all the values assigned as ""
        vector<string> positions(10, "");
        // iterate through the string s using index i
        for (int i = 0; i < s.size(); i++)
        {
            // index j will equal index i
            int j = i;
            // a temporary string, temp, will be used to store a single word
            string temp;
            // while the value at s[j] is not a digit
            while (!isdigit(s[j]))
            {
                // add the value at s[j] to the end of the temporary string, temp
                temp.push_back(s[j]);
                // increment index j
                j++;
            }
            // the temporary string, temp, will be stored in the vector of strings, positions, at the ASCII's decimal value when subtracting '0' from the digit found at s[j]
            positions[s[j]-'0'] = temp;
            // index i will then be moved to the next value after j
            i = j + 1;
        }
        // now that the words are sorted in the vector of strings, positions, the string solution will be used to store the sentence
        string solution;
        // iterate through the vector of strings, positions, using index k
        for (int k = 1; k < 10; k++)
        {
            // if the value at positions[k] is not ""
            if (positions[k] != "")
            {
                // add the word at positions[k] to the end of the string solution
                solution += positions[k];
                // add a space to the end of the string solution
                solution += ' ';
            }
        }
        // remove the last element, ' ',  from the end of the string solution
        solution.pop_back();
        // return the string solution, which stores the sentence
        return solution;
    }
};