class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    { vector <vector <int> > v (numRows); 
        int k = 1 ;
         v[0].push_back(k) ;
     for(int n = 1 ;n<numRows ; n++)
     {    k = 1 ;
         v[n].push_back(k) ;
         for(int r = 0;r<n-1 ;r++)
       {
         k = k *(n-r); 
             k = k / (r+1) ;
             v[n].push_back(k) ; 
        }
      k = 1 ;
         v[n].push_back(k) ;
         
     }
     return v ;   
    }
};