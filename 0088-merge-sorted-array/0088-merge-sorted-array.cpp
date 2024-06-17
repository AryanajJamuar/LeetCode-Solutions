class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) 
    {
        vector <int> v ;
        int i = 0 , j = 0 ;
        while(i!=m and j!=n)
        {
            if(n1[i]>=n2[j])
            {
                v.push_back(n2[j]) ;
                j++ ;
            }
            else 
            {
                v.push_back(n1[i]) ;
                i++ ;
            }
        }
        while(i!=m)
        {
            v.push_back(n1[i]) ;
            i++ ;
            }
         while(j!=n)
        {
            v.push_back(n2[j]) ;
            j++ ;
            }
        for(int i=0;i<n+m ;i++)
            n1[i] = v[i] ;
        
    }
};