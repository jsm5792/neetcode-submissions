class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = piles[0];
        int ans;
        for(auto i : piles)
        {
            r = max(i,r);
        }
        while(l<=r)
        {
            int mid = (l+r)/2;
            long long hours = 0;
            for(auto i : piles)
            {
                hours += (i + mid -1) / mid;
            }
            if(hours <= h)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return ans;
    }
};
