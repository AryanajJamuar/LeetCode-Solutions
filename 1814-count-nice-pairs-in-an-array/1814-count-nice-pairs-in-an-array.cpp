class Solution {
public:
    int reverse_int(int& num )
    {
        int rev_n = 0;
        while(num)
        {
            rev_n = (rev_n * 10) + (num % 10); 
            num /= 10;
        }
        return rev_n;

    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0;
        int mod = 1e9+7;
        for(int& x : nums)
        {
            int sum = x - reverse_int(x);
            if(mp.find(sum) == mp.end())
            {
                mp[sum] = 1;
            }
            else{
                ans = (ans + mp[sum]) % mod;
                mp[sum]++;
            }
        }
        return ans;
        
    }
};
