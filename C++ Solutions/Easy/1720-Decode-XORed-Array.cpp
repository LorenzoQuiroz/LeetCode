class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        // the message will be a vector of integers
        vector<int> message;
        // add first to the end of the vector message
        message.push_back(first);
        // traverse through the vector encoded using index i
        for (int i = 0; i < encoded.size(); i++)
        {
            // add message[i] ^ encoded[i] to the end of the vector message
            message.push_back(message[i] ^ encoded[i]);
        }
        // return the message
        return message;
    }
};