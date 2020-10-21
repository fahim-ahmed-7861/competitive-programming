#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    char c;
    while(scanf("%d",&n)==1)
    {
         c=' ';
        int ara[4000],ara1[4000],i,a;
         ara[1]=n;
         int k=0;
        for(i=1; c==' '; i++)
        {
            scanf("%d%c",&ara[i],&c);
            k++;
        }
        if(ara[1]>ara[0])
           {
              ara1[0]=abs(ara[1])-abs(ara[0]);

           }
        else
            {
                ara1[0]=abs(ara[0])-abs(ara[1]);
            }
        for(i=1; i<k-1; i++)
        {
            a=(abs(ara[i])-abs(ara[i+1]));
            if(a<0)ara1[i]=(a*(-1));
            else ara1[i]=a;
        }
        for(i=0; i<k-2; i++)
        {
            if(ara1[i+1]>ara1[i])break;
        }
        if(i==k-2)printf("Jolly\n");

        else printf("Not jolly\n");

    }
    return 0;
}
