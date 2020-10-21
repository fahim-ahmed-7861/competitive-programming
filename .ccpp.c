#include<bits/stdc++.h>
using namespace std;
int main()
{
     char str[110];
     int n,i;
     scanf("%d",&n);

     scanf(" %[\n]",str);

     for(i=n-1; i>0; i--)
     {
         if(str[i-1]!='a' || str[i-1]!='e'
            || str[i-1]!='i' || str[i-1]!='o'
            || str[i-1]!='u' || str[i-1]!='y')
                printf("%c",str[i]);
    }
    printf("%c\n",str[i]);

    return 0;

}
