class Solution {
public:
    bool canJump(vector<int>& nums)
    {
        int maxr = 0;
        int i=0;
        while(i<nums.size() && i<=maxr)
        {
            maxr = max(i+nums[i], maxr);
            i++;
        }
        if(i==nums.size()) return true;
        else return false;    
    }
};