class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int maxWealth = 0;  // Stores the highest wealth found so far

        // Go through each customer (each row)
        for(int i = 0; i < accounts.size(); i++) {

            int tracker = 0;  // Stores the current customer's total wealth

            // Go through all bank accounts of the current customer
            for(int j = 0; j < accounts[i].size(); j++) {

                // Add the money from each account
                tracker = tracker + accounts[i][j];
            }

            // Update maxWealth if this customer is richer
            if(tracker > maxWealth) {
                maxWealth = tracker;
            }
        }

        // Return the wealth of the richest customer
        return maxWealth;
    }
};


// ### Quick revision 🧠

// ```text
// i → customer / row
// j → bank account / column
// tracker → current customer's total wealth
// maxWealth → highest wealth found so far
// ```

// The core pattern to remember:

// ```text
// Outer loop → select a row
// Inner loop → calculate that row's sum
// Compare sum → update maximum
// ```
