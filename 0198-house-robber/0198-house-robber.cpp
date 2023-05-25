class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>ans;
        ans.push_back(0);
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size(); i++)
        {
            ans.push_back(max(ans.back(), nums[i]+ans[i-1]));
        }
        return ans.back();
    }
};