#include<stdio.h>
int main()
{
    int T,i,j,n,z,count;

    scanf("%d",&T);

    while(T--){ count=0;
            scanf("%d %d",&n,&z);
    for(i=n;i<=z;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0) break;


            }
            if(i==j) {printf("%d ",i);count++;}
;
        }
        printf("\ncount = %d\n",count);

    }

    return 0;

}
