#include<bits/stdc++.h>
using namespace std;
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
int main()
{
     string str;

     int n,a;

     while(getline(cin,str))
     {
         n=str.size();

         for(int i=0; i<n; i++)
         {
             if(ischar(str[i]))
              {
                  if(islower(str[i]))
                  {
                      a=str[i]+13;

                      if(a>122)
                        str[i]=((a-122)+96);

                      else str[i]=a;
                  }
                  else{

                     a=str[i]+13;

                      if(a>90)
                        str[i]=((a-90)+64);

                      else str[i]=a;
                  }
              }
         }
           cout<<str<<endl;
     }
     return 0;
}
