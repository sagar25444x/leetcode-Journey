class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;       // Stores the sum of the current subarray
        int maxSum = INT_MIN;  // Stores the maximum subarray sum found so far

        // Traverse the array using a single loop
        for (int i = 0; i < nums.size(); i++) {

            currSum += nums[i];  // Add the current element to the running sum

            // Update maxSum if the current sum is greater
            maxSum = max(currSum, maxSum);

            // If the current sum becomes negative, reset it to 0
            // A negative sum would reduce the sum of a future subarray
            if (currSum < 0) {
                currSum = 0;
            }
        }

        // Return the maximum sum of any non-empty contiguous subarray
        return maxSum;
    }
};