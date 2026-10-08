class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> ans(amount+1,amount+1);
        ans[0]=0;
        for(int i=1;i<=amount;i++)
        {
            for(auto c : coins)
            {
                if(i<c)
                {
                    continue;
                }
                ans[i] = min(ans[i],ans[i-c]+1);
            }
        }
        if(ans[amount]==amount+1)
        {
            return -1;
        }
        return ans[amount];
    }
};
