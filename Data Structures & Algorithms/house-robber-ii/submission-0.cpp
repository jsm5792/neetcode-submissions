class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(n),b(n);
        if(n==1)
        {
            return nums[0];
        }
        a[0] = nums[0];
        a[1] = max(nums[0],nums[1]);
        b[0] = 0;
        b[1] = nums[1];
        for(int i=2;i<n;i++)
        {
            a[i] = max(a[i-1],a[i-2]+nums[i]);
            b[i] = max(b[i-1],b[i-2]+nums[i]);
        }
        return max(a[n-2],b[n-1]);
    }
};
