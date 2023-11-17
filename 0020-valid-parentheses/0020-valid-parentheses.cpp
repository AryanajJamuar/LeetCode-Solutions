class Solution {
public:
    bool isValid(string s) 
    {
        stack <char> st ;
        int i = 0 ;
        while(i!=s.size())
        { if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            st.push(s[i]) ;
          else if(s[i]==')' || s[i]=='}' || s[i]==']')
          {
              if(s[i]==')')
              {
                  if(st.empty()==true || st.top()!='(' )
                      return false ;
                  else 
                      st.pop() ;
              }
              if(s[i]=='}')
              {
                  if(st.empty()==true || st.top()!='{' )
                      return false ;
                   else 
                      st.pop() ;    
              } 
              if(s[i]==']')
              {
                  if(st.empty()==true || st.top()!='[' )
                      return false ;
                     else 
                      st.pop() ;  
              }
          }
            
            
            
            i++ ;
        }
        if(st.empty()==true)
            return true ;
        else 
            return false ;
    }
};