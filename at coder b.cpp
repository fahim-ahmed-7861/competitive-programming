#include<bits/stdc++.h>
using namespace std;

int in_array(string value, string *array)
{
    int size = (*array).size();
    for (int i = 0; i < size; i++)
    {
        if (value == array[i])
        {
            return i;
        }
    }

    return -1;
}
int main()
{
      int n,m,i,a=0,p=0;

      scanf("%d",&n);

      string str[n+2],k;

      int ara[n+1];

      for(i=0; i<n; i++)ara[i]=0;

      for(i=0; i<n; i++)
      {
          cin>>k;

         if(i==0)
         {
             str[a++]=k;

             ara[p]=ara[p]+1;

             p++;
         }

         else if(in_array(k,str)!=-1)
         {
             ara[in_array(k,str)]=ara[in_array(k,str)]+1;
         }

         else
         {
             str[a++]=k;

             ara[p]=ara[p]+1;

             p++;
         }

      }

      scanf("%d",&m);

      for(i=0; i<m ;i++)
      {
          cin>>k;

        if(in_array(k,str)!=-1)
         {
             ara[in_array(k,str)]=ara[in_array(k,str)]-1;
         }

      }


      p=*max_element(ara,ara+a);

      if(p<0)printf("0\n");

      else printf("%d\n",p);

      return 0;
}
