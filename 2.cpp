//Please excuse code quality. Written in 2017
#include<iostream>
using namespace std;
void call()
{
 string s,t;
 cin>>s; 
 cin>>t;
 long int s1,t1,c=0,i,j,k,l,tt,f=0;
 s1=s.length();
 t1=t.length();
 if(t1>s1)
   cout<<"No Match!\n";
 else
  {
   for(i=0;i<=(s1-t1);i++)
     {
      c=0;
      k=i;
      l=i+t1-1;
      tt=t1-1;
      for(j=0;j<t1;j++)
       {
         if(s.at(k)!=t.at(j))
           c++;
         if(t1%2!=0)
          {
            if((j+1)>tt)
            break;
          }
        if(s.at(l)!=t.at(tt))
         c++;
         if(c>=2)
         break;
         if(t1%2==0)
           {
            if((j+1)==tt)
            break;
           }
         k++;
         l--;
         tt--;
       }
      if(c<2)
       {
        cout<<i<<" "; 
        f=1;
       }
     }
    if(c>=2&&f==0)
     cout<<"No Match!\n";
    else
     cout<<"\n";
  }
}
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
   {
     call();
   }
 return 0;
}