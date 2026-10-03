class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int ansArrSize = n * 2;
        vector <int> ans(ansArrSize);

        for(int i = 0; i < n; i++) {
            ans.at(i) = nums[i];
            ans.at(n + i) = nums[i];
        }

        return ans;
    }
};