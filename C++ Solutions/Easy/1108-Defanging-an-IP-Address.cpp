class Solution {
public:
    string defangIPaddr(string address) {
        // the string result is a defanged version of string address
        string result;
        // iterate through the string address using index i
        for (int i = 0; i < address.size(); i++)
        {
            // if the value is '.'
            if (address[i] == '.')
            {
                // add [.] to the string result
                result += "[.]";
            }
            // else the value is not '.'
            else
            {
                // add the value to the string result
                result += address[i];
            }
        }
        // return the string result
        return result;
    }
};