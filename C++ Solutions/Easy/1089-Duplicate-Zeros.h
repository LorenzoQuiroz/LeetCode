class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        // iterate through the vector with index i
        for (int i = 0; i < arr.size(); i++)
        {
            // if the value at index i is a zero
            if (arr[i] == 0)
            {
                // remove the last element
                arr.pop_back();
                // insert a zero at the current position
                arr.insert(arr.begin() + i, 0);
                // increment the index
                i++;
            }
        }
    }
};