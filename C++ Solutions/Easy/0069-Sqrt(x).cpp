class Solution {
public:
    int mySqrt(int x) {
        // the integer to be modified is r, assigned as x (no decimals will be stored)
        long int r = x;
        // while r squared is greater than x
        while (r * r > x)
        {
            // reduce r
            r = (r + x / r) / 2;
        }
        // return the root
        return r;
    }
};