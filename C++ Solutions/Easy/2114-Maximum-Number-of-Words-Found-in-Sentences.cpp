class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        // initialize the max words with the minimum integer value
        int maxWords = INT_MIN;
        // iterate through each sentence using index i
        for (int i = 0; i < sentences.size(); i++)
        {
            // initialize word counter to 1
            int word = 1;
            // iterate through each char within a sentence using index j
            for (int j = 0; j < sentences[i].size(); j++)
            {
                // if the char within a sentence is a single space
                if (sentences[i][j] == ' ')
                {
                    // increment the word counter
                    word++;
                }
            }
            // have the max words be the max value between the current max words and the word counter
            maxWords = max(maxWords, word);
        }
        // return the max number of words that appear in a single sentence
        return maxWords;
    }
};