#include<iostream>
#include <string>
using namespace std;
int main()
{
     char str[100],i,n;

    // cin>>n;

     //cin>> str;
     cin.getline(str,100);

     //cout<<str;

      for(i=0; str[i]!='\0'; i++)
      {
         if(str[i]!='a' &&
            str[i]!='i' && str[i]!='e' &&
           str[i]!='o' && str[i]!='u' ) cout<<str[i];

       else continue;
      }
}
