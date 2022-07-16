class Solution {
public:
    bool canChange(string start, string target) {
        
       string f="",e="";
        for(int i =0 ; i<start.length() ; i++)
        {
            if(start[i] != '_')
             f += start[i];
        }
        for(int i =0 ; i<target.length() ; i++)
        {
            if(target[i] != '_')
            e += target[i];
        }
        
        
        int c=-1,d=-1;

        int a=-1,b=-1;
         for(int i =0 ; i<start.length() ; i++)
        {
            if(start[i] == 'L')
            {a= i; break;}
        }
         for(int i =0 ; i<start.length() ; i++)
        {
            if(target[i] == 'L')
            {b= i; break;}
        }
        cout<<a<<" "<<b<<endl;
        if(a<b or f!=e) return false;
        
        for(int i =start.length()-1 ; i>=0 ; i--)
        {
            if(start[i] == 'L')
            {a= i; break;}
        }
        for(int i =start.length()-1 ; i>=0 ; i--)
        {
            if(target[i] == 'L')
            {b= i; break;}
        }
        cout<<a<<" "<<b<<endl;
        if(a<b or f!=e) return false;
         
        for(int i =start.length()-1; i>0 ;i--)
        {
            if(start[i] == 'R')
            {c= i;break;}
        }
        for(int i =start.length()-1; i>0 ;i--)
        {
            if(target[i] == 'R')
            {d= i;break;}
        }
        if(c>d 
          )return false;
        
        for(int i =0; i<start.length() ;i++ )
        {
            if(start[i] == 'R')
            {c= i;break;}
        }
        for(int i =0; i<target.length() ;i++ )
        {
            if(target[i] == 'R')
            {d= i;break;}
        }
        if(c>d 
          )return false;
        else
            return true;
    }
};