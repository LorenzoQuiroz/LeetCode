class Solution {
public:
    int maximum69Number (int num) {
        // convert integer to string and store in string n
        string n = to_string(num);
        // iterate through string n using index i
        for (int i = 0; i < n.size(); i++)
        {
            // if the value is '6'
            if (n[i] == '6')
            {
                // assign the value '9'
                n[i] = '9';
                // stop iterating through the string n
                break;
            }
        }
        // convert the string n to integer and return the value
        return stoi(n);
    }
};