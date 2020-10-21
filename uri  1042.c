#include<stdio.h>
int main()
{
    int a,b,c,ara[10],i,j,n=3,temp;

    scanf("%d %d %d",&a,&b,&c);
    ara[0]=a;
    ara[1]=b;
    ara[2]=c;

     for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ara[i]>ara[j])
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;

            }

        }
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",ara[0],ara[1],
           ara[2],a,b,c);


    return 0;
}
