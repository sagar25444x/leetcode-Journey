class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxSum = INT_MIN;  // Stores the maximum wealth found
        // Go through each customer
        for(int i = 0; i < accounts.size(); i++) {
            int tracker = 0;  // Stores current customer's total wealth
            // Add all accounts of the current customer
            for(int j = 0; j < accounts[i].size(); j++) {
                tracker = tracker + accounts[i][j];
            }
            // Compare complete wealth with maximum wealth
            maxSum = max(tracker, maxSum);
        }
        // Return the richest customer's wealth
        return maxSum;
    }
};
// ```

// ### Your important pattern 🧠

// Remember this structure:

// ```text
// for each row/customer
//     sum the entire row

//     after finishing the row:
//         compare sum with maximum
// ```

// Your use of:

// ```cpp
// max(tracker, maxSum)
// ```

// is actually a nice improvement over writing:

// ```cpp
// if(tracker > maxSum)
//     maxSum = tracker;
// ```

// So **your main logic is right**. The only thing I'd change is moving the `max()` outside the inner loop.
