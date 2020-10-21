#include<stdio.h>
int main()
{
        int a,b,c,j,k=0,T,temp,i,ara[500];
        scanf("%d",&T);
        while(T--)
        {
        k++;

        for(i=0;i<3;i++)
        {
            scanf("%d",&ara[i]);
        }
            for(i=0;i<3;i++)
            {

            for(j=i+1;j<3;j++){

            if(ara[i]>ara[j])
        {

            temp=ara[i];
            ara[i]=ara[j];
            ara[j]=temp;
        }

        }
            }

        printf("Case %d: %d %d %d\n",k,ara[0],ara[1],ara[2]);
        }

    return 0;

}

