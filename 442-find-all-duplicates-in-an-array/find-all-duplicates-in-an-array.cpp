class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        sort(nums.begin(), nums.end());

        int left = 0;
        int right = 1;

        while (right < nums.size()) {

            if (nums[left] == nums[right]) {
                ans.push_back(nums[left]);
                left++;
                right++;
            }
            else {
                left++;
                right++;
            }
        }

        return ans;
    }
};