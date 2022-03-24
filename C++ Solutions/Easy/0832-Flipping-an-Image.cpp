class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        // flip image horizontally, meaning to reverse each row...
        // traverse through the vector image, from left to right, using index i
        for (int i = 0; i < image.size(); i++)
        {
            // at each image[i], index j traverses from left to right, and index k traverses from right to left,
            // until j and k cross over or meet in the center
            for (int j = 0, k = image[i].size() - 1; j < k; j++, k--)
            {
                // within image[i], swap the value at the left index, j, with the value at the right index, k
                swap(image[i][j], image[i][k]);
            }
        }
        // invert image, meaning to change 0's to 1's and 1's to 0's...
        // traverse through the vector image, from left to right, using index m
        for (int m = 0; m < image.size(); m++)
        {
            // at each image[m], index n traverses from left to right
            for (int n = 0; n < image[m].size(); n++)
            {
                // to invert the value, XOR it with 1
                // 0 XOR 1 = 1 ... 0 ^ 1 = 1
                // 1 XOR 1 = 0 ... 1 ^ 1 = 0
                image[m][n] ^= 1;
            }
        }
        // return the modified image
        return image;
    }
};