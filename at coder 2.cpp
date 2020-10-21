
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j;
    double sum=0,s,p;
    char str1[20],ch[20];

    scanf("%s %s",str1,ch);

   strcat(str1,ch);

   n=strlen(str1);
    for(i=n-1,j=0; i>=0; j++,i--)
   {
       sum+=(str1[i]-48)*pow(10,j);
   }


    s=sqrt(sum);

    p=floor(s);

    //cout<<p<<endl<<s;

    if(p==s)cout<<"Yes"<<endl;

    else cout<<"No"<<endl;

    return 0;
}
