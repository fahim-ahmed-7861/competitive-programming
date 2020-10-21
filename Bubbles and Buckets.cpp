#include<stdio.h>
int main()
{
    int i,j,n,s=0,temp;

    while(scanf("%d",&n)==1 && n!=0)
    {
        s=0;
    int ara[n+1];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
                s++;

            }

        }

    }
       if(s%2==1)printf("Marcelo\n");

       else printf("Carlos\n");
    }


    return 0;
}


