class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> ans(n+1);
        ans[0] = 1;
        if(s[0] != '0')
        {
            ans[1] = 1;
        }
        else
        {
            ans[1] = 0;
        }
        for(int i=2;i<=n;i++)
        {
            if(s[i-1]!='0')
            {
                ans[i] += ans[i-1];
            }
            int j = (s[i-2] - '0') * 10 + (s[i-1]-'0');
            if(s[i-2]!='0' && j<=26)
            {
                ans[i] += ans[i-2];
            }
        }
        return ans[n];
        
    }
};
