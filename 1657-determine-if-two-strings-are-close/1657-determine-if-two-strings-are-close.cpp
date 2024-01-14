class Solution {
public:
    bool closeStrings(string wo1, string wo2) 
    {   vector <int> w1(26,0), w2(26,0),w3(26,0),w4(26,0) ;
        for(int i=0;i<wo1.size();i++)
        {
            w1[wo1[i]-'a']++ ;
            w3[wo1[i]-'a'] = 1 ;
        }
     for(int i=0;i<wo2.size();i++)
        {
            w2[wo2[i]-'a']++ ;
            w4[wo2[i]-'a'] = 1 ;
        }
     sort(w1.begin(),w1.end()) ;
      sort(w2.begin(),w2.end()) ;
     return w1==w2 and w3==w4 ;
    }
};