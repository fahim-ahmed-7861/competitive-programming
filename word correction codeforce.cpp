#include<bits/stdc++.h>
using namespace std;
int main()
{
     char str[110];
     int n,i;
     scanf("%d",&n);

     scanf("%s",str);

     printf("%c",str[0]);

     for(i=1; i<n; i++)
     {
         if(str[i-1]!='a' && str[i-1]!='e'
            && str[i-1]!='i' && str[i-1]!='o'
            && str[i-1]!='u' && str[i-1]!='y')
                printf("%c",str[i]);

        else
        {
           if(str[i]!='a' && str[i]!='e'
            && str[i]!='i' && str[i]!='o'
            && str[i]!='u' && str[i]!='y') printf("%c",str[i]);
        }
    }
    printf("\n",str[i]);

    return 0;

}
