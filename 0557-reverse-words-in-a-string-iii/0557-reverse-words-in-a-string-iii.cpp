class Solution {
public:
    string reverseWords(string s) 
    { int i = 0 ;
      string a ;
      string ans ;
        while(i!=s.size())
        { if(s[i]==' ')
            { reverse(a.begin(),a.end()) ;
              ans+=a ;
              a.clear() ;
              ans.push_back(' ') ;
            }
           else 
           {
               a.push_back(s[i]) ;
           }
         i++ ;
        }
     reverse(a.begin(),a.end()) ;
     ans+=a ;
     return ans ; 
    }
};