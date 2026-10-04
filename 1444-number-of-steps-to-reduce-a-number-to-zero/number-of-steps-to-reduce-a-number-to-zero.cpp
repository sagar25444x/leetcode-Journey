class Solution {
public:
    int numberOfSteps(int num) {

        int count = 0;  // Stores the number of steps

        // Keep running until num becomes 0
        while(num != 0) {

            // If num is even, divide it by 2
            if(num % 2 == 0) {
                num = num / 2;
                count++;
            }

            // If num is odd, subtract 1
            else {
                num = num - 1;
                count++;
            }
        }

        // Return total number of steps
        return count;
    }
};


// **Quick revision points:**

// * `num % 2 == 0` → number is **even**
// * `else` → number is **odd**
// * Even → `num / 2`
// * Odd → `num - 1`
// * `count++` → count one operation
// * `while(num != 0)` → keep going until `num` becomes `0`
// * `return count` → answer is the number of steps
