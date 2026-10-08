class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMax = nums[0];
        int currMin = nums[0];
        int ans = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int a,b;
            a = currMax * nums[i];
            b = currMin * nums[i];
            currMax = max({nums[i],a,b});
            currMin = min({nums[i],a,b});
            ans = max(currMax, ans);
        }
        return ans;
    }
};
