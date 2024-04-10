class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& d) 
    {
      vector <int> ans(d.size(),-1) ;
      sort(d.begin(),d.end()) ;
     
      queue <int> q ; 
      for(int i=0;i<d.size();i++)
      {
          q.push(i) ;
          
      }
        int i = 0 ;
        
        // sorted string is d 
        // ans bharna hai 
        // q mein position ka halat hai
      while(q.size()>1)
      {
          ans[q.front()] = d[i] ;
          i++ ;
          q.pop() ;
          q.push(q.front()) ;
          q.pop() ;
      }
        if(q.size()==1)
            ans[q.front()] = d[i] ;
        return ans ;
    }
};