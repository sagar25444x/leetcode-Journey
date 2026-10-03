class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    
        // Store the size of nums because our answer
        // will have the same number of elements.
        int n = nums.size();

        // Create a new vector 'sum' of size n
        // to store the running sum at each index.
        vector<int> sum(n);

        // For the first element, there is no previous
        // element to add, so its running sum is itself.
        sum[0] = nums[0];

        // Start from index 1 because index 0 is already handled.
        for(int i = 1; i < n; i++) {
            
            // Running sum = current number + previous running sum.
            //
            // Example:
            // sum[1] = nums[1] + sum[0]
            // sum[2] = nums[2] + sum[1]
            // sum[3] = nums[3] + sum[2]
            sum[i] = nums[i] + sum[i - 1];
        }
        // Return the array containing all running sums.
        return sum;
    }
};