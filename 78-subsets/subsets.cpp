class Solution {
public:
    void backtrack(int i, vector<int>& ss, vector<int>& nums, vector<vector<int>>& ans) {
        if (i == nums.size()) {
            ans.push_back(ss);
            return;
        }
        ss.push_back(nums[i]);
        backtrack(i + 1, ss, nums, ans);
        ss.pop_back();
        backtrack(i + 1, ss, nums, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ss;
        backtrack(0, ss, nums, ans);
        return ans;
    }
};