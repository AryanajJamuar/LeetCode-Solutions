class Solution {
public:
    long long minimumPossibleSum(int n, int t)
    {
        unordered_set <int> st ;
        long long sum = 0;
        int j = 1 ;
        
        for(int i=0;i<n;i++)
        {
            while(st.find(t-j)!=st.end())
                j++ ;
            st.insert(j) ;
            sum+=j ;
            j++ ;
        }
       return sum ; 
    }
};