class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        int i;
        // iterate through string s without reading the last index
        for (i = 0; i + 1 < s.size(); i++)
        {
            // if the value of left index is greater than the right index, subtract
            // IV = 4, IX = 9
            if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'))
            {
                total -= 1;
            }
            // XL = 40, XC = 90
            else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
            {
                total -= 10;
            }
            // CD = 400, CM = 900
            else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))
            {
                total -= 100;
            }
            // else read the char and add its corresponding value
            else if (s[i] == 'I')
            {
                total += 1;
            }
            else if (s[i] == 'V')
            {
                total += 5;
            }
            else if (s[i] == 'X')
            {
                total += 10;
            }
            else if (s[i] == 'L')
            {
                total += 50;
            }
            else if (s[i] == 'C')
            {
                total += 100;
            }
            else if (s[i] == 'D')
            {
                total += 500;
            }
            else if (s[i] == 'M')
            {
                total += 1000;
            }
        }
        // read the last char and add its corresponding value
        if (s[i] == 'I')
        {
            total += 1;
        }
        else if (s[i] == 'V')
        {
            total += 5;
        }
        else if (s[i] == 'X')
        {
            total += 10;
        }
        else if (s[i] == 'L')
        {
            total += 50;
        }
        else if (s[i] == 'C')
        {
            total += 100;
        }
        else if (s[i] == 'D')
        {
            total += 500;
        }
        else if (s[i] == 'M')
        {
            total += 1000;
        }
        // return the total
        return total;
    }
};