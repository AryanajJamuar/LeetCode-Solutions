class Solution {
public:
    bool winnerOfGame(string a) 
    { int n = a.size() ;
      int acnt = 0 ;
      for(int i=1;i<n-1;i++)
      {
          if(a[i]=='A' and a[i-1]=='A' and a[i+1] == 'A')
              acnt++ ;
      }
     int bcnt = 0 ;
      for(int i=1;i<n-1;i++)
      {
          if(a[i]=='B' and a[i-1]=='B' and a[i+1] == 'B')
              bcnt++ ;
      }
     if(acnt>bcnt)
         return true ;
     return false ;
    }
};