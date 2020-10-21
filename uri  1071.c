#include<stdio.h>
int main()
{
    int i,sum=0,n,m;

    scanf("%d %d",&n,&m);
    m+=1;
    if(m%2==0)m+=1;
    for(i=m; i<n; i+=2)
    {
       sum+=i;
    }
    printf("%d\n",sum);
    return 0;

}

