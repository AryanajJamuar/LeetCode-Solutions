class Solution {
public:
    int minSteps(string s, string t)
    {
       vector <int> a (26,0) ;
       vector <int> b (26,0) ;
       for(int i= 0;i<s.size();i++)
       {
           a[s[i]- 'a']++ ;
           
       }
        
        for(int i= 0;i<t.size();i++)
       {
           b[t[i]- 'a']++ ;
           
       }   
        int ans = 0 ;
            for(int i= 0;i<26;i++) 
            {
                if(a[i]>b[i])
                    ans+=(a[i]-b[i]) ;
            }
        cout<<b[1] ;
       return ans ; 
    }
};