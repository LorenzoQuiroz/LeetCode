class Solution {
public:
    int numberOfSteps(int num) {
        // the number of steps begins at 0
        int steps = 0;
        // while num is not 0
        while (num != 0)
        {
            // if num is even
            if (num % 2 == 0)
            {
                // divide num by 2
                num /= 2;
            }
            // else num is odd
            else
            {
                // decrement num
                num--;
            }
            // increment steps
            steps++;
        }
        // return the number of steps it took to get to 0
        return steps;
    }
};