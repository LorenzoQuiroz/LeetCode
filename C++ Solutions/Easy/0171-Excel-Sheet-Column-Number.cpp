class Solution {
public:
    int titleToNumber(string columnTitle) {
        // n is the size of columnTitle
        int n = columnTitle.size();
        // multiplication starts at 0
        int multiplication = 0;
        // answer starts at 0
        int answer = 0;
        // traverse through the string from right to left 
        for (int i = n - 1; i >= 0; i--)
        {
            // number is ASCII value of current letter - 'A' + 1
            // A is 1, B is 2, ..., Z is 26
            int number = (columnTitle[i] - 'A') + 1;
            // answer = answer + number * (26 ^ multiplication)
            // the values are using base 26 
            answer += number * pow(26, multiplication);
            // increment multiplication
            multiplication++;
        }
        // return the answer
        return answer;
    }
};