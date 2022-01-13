class Solution {
public:
    int climbStairs(int n) {
        // similar to finding the n-th Fibonacci Number
        int arr[n+1];
        // the first 2 values in the sequence are equal to 1
		arr[0] = 1;
		arr[1] = 1;
        // using index i, iterate through the array starting at the 3rd value (at index 2)
		for (int i = 2; i <= n; i++)
        {
            // assign the value at the current index to be the summation of the previous 2 values in the array
			arr[i] = arr[i-1] + arr[i-2];
		}
        // return the value at the nth step
		return arr[n];
    }
};