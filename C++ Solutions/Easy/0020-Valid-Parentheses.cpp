class Solution {
public:
    bool isValid(string s) {
        // char stack for pushing the left respective parentheses
        stack<char> st;
        // iterate through the string s
        for (int i = 0; i < s.size(); i++)
        {
            // if the char is a left parenthesis
            if (s[i] == '(')
            {
                // push the left parenthesis to the stack st
                st.push('(');
            }
            // else if the char is a right parenthesis
            else if (s[i] == ')')
            {
                // if the stack is not empty
                if (!st.empty())
                {
                    // if the top of the stack is a left parenthesis
                    if (st.top() == '(')
                    {
                        // pop the left parenthesis
                        st.pop();
                    }
                    else
                    {
                        // else the string is invalid
                        return false;
                    }
                }
                else
                {
                    // else the string is invalid
                    return false;
                }
            }
            // else if the char is a left brace
            else if (s[i] == '{')
            {
                // push the left brace to the stack st
                st.push('{');
            }
            // else if the char is a right brace
            else if (s[i] == '}')
            {
                // if the stack is not empty
                if (!st.empty())
                {
                    // if the top of the stack is a left brace
                    if (st.top() == '{')
                    {
                        // pop the left brace
                        st.pop();
                    }
                    else
                    {
                        // else the string is invalid
                        return false;
                    }
                }
                else
                {
                    // else the string is invalid
                    return false;
                }
            }
            // else if the char is a left square bracket
            else if (s[i] == '[')
            {
                // push the left square bracket to the stack st
                st.push('[');
            }
            // else if the char is a right square bracket
            else if (s[i] == ']')
            {
                // if the stack is not empty
                if (!st.empty())
                {
                    // if the top of the stack is a left square bracket
                    if (st.top() == '[')
                    {
                        // pop the left square bracket
                        st.pop();
                    }
                    else
                    {
                        // else the string is invalid
                        return false;
                    }
                }
                else
                {
                    // else the string is invalid
                    return false;
                }
            }
        }
        // if the stack is empty
        if (st.empty())
        {
            // the string is valid
            return true;
        }
        else
        {
             // else the string is invalid
            return false;
        }
    }
};