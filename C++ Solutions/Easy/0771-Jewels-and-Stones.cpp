class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        // total number of jewels in the stones
        int total = 0;
        // iterate through the string jewels with index i
        for (int i = 0; i < jewels.size(); i++)
        {
            // iterate through the string stones with index j
            for (int j = 0; j < stones.size(); j++)
            {
                // if a char jewel matches a char stone
                if (jewels[i] == stones[j])
                {
                    // increment total counter
                    total++;
                }
            }
        }
        // total number of jewels in the stones
        return total;
    }
};