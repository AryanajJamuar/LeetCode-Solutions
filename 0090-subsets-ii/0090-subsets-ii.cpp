class Solution {
public:
    vector<vector<int>> ans ;
    set <vector <int> > st ;
    void rec(vector<int>& nums , vector <int> & curr , int i, int n)
    {  if(i==n)
        {
         if(st.find(curr)==st.end())
         { ans.push_back(curr) ;
           st.insert(curr) ;
         }
         
            
        return ;
        }
      rec(nums,curr,i+1,n) ; 
    curr.push_back(nums[i]) ;
    
    rec(nums,curr,i+1,n) ;
    curr.pop_back() ;
   
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    { vector <int> curr ;
     sort(nums.begin(),nums.end()) ;
        rec(nums,curr,0,nums.size()) ;
       return ans ;
        
    }
};