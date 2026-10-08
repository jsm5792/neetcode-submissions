class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total_sum = 0;
        for(auto i: nums)
        {
            total_sum += i;
        }
        if(total_sum %2 ==1)
        {
            return false;
        }
        vector<bool> dp(total_sum/2 + 1,false);
        dp[0] = true;
        for(auto i : nums)
        {
            for(int j = total_sum/2;j>=i;j--)
            {
                if(dp[j-i])
                {
                    dp[j] = true;
                }
            }
        }
        return dp[total_sum/2];
    }
};
