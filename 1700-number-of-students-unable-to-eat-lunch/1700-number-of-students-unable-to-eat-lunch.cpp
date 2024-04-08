class Solution {
public:
    int countStudents(vector<int>& stu, vector<int>& sand) 
    {
        queue <int> q ;
        stack <int> st ;
        for(int i=0;i<stu.size();i++)
        q.push(stu[i]) ;
        reverse(sand.begin(),sand.end()) ;
        for(int i=0;i<sand.size();i++)
        st.push(sand[i]) ;

        int i = 0 ;
        while(i<1e4 && !st.empty() && !q.empty())
        {
            if(st.top() == q.front())
            {cout<<"popped "<<q.front()<<st.top()<<endl ;
                st.pop() ;
            q.pop() ;
            
            }
            else 
            {
                int x = q.front() ;
                q.pop() ;
                q.push(x) ;
            }
            i++ ;
        }
        int ans = q.size() ;
        while(!q.empty())
        {
            cout<<q.front()<<" " ;
            q.pop() ;
        }
        cout<<endl ;

        return ans;
        
    }
};