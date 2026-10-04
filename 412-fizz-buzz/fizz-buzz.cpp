class Solution {
public:
    vector<string> fizzBuzz(int n) {

        // Empty vector because we will add answers one by one
        vector<string> ans;

        // Check every number from 1 to n
        for(int i = 1; i <= n; i++) {

            // Check both first because numbers like 15 are divisible by 3 AND 5
            if(i % 3 == 0 && i % 5 == 0) {
                ans.push_back("FizzBuzz");
            }

            // Divisible by 3
            else if(i % 3 == 0) {
                ans.push_back("Fizz");
            }

            // Divisible by 5
            else if(i % 5 == 0) {
                ans.push_back("Buzz");
            }

            // Not divisible by 3 or 5 → add the number as a string
            else {
                ans.push_back(to_string(i));
            }
        }

        return ans;
    }
};

// **Revision points:**

// * `i % 3 == 0` → divisible by 3
// * `i % 5 == 0` → divisible by 5
// * `&&` → both conditions must be true
// * `push_back()` → adds an element to the vector
// * `to_string(i)` → converts `int` → `string`
// * Check **3 & 5 first** → otherwise `15` would become `"Fizz"` instead of `"FizzBuzz"`
// * `i <= n` → because the problem includes `n`
