#include<stdio.h>
int main()
{
    int i,j=0,n,p,k=0;

    int ara[15],ara2[15];

    for(i=0; i<15; i++)
    {
        scanf("%d",&n);

        if(n%2==0)
        {
            ara[j]=n;
            j++;
            if(j==5)
            {
                for(p=0; p<j; p++)
                    printf("par[%d] = %d\n",p,ara[p]);

                j=0;
            }
        }

        else
        {
            ara2[k]=n;
            k++;
            if(k==5)
            {
             for(p=0; p<k; p++)
                    printf("impar[%d] = %d\n",p,ara2[p]);

                k=0;
            }
        }
    }
     for(p=0; p<k; p++)
                    printf("impar[%d] = %d\n",p,ara2[p]);
    for(p=0; p<j; p++)
                    printf("par[%d] = %d\n",p,ara[p]);
    return 0;
}
