#include<stdio.h>
int main()
{
    int i,j,k,n,in=0,b=0,temp;

    scanf("%d",&n);

    int ara[n+10];
    int ara2[n+10];

    for(i=0; i<n; i++)scanf("%d",&ara[i]);

     for(i=0; i<n; i++)ara2[i]=ara[i];


     for(i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;

            }

        }

    }
       printf("bubblesort sorted sequence:");
       for(i=0; i<n; i++)printf("%d ",ara[i]);

    printf("\nbubble sort swap num %d",b);


    for(i=1; i<n; i++)
    {
        j=i-1;
        temp=ara2[i];
        while(j>-1 && temp<ara2[j])
        {
            ara2[j+1]=ara2[j];
            in++;
            j--;
        }
        ara2[j+1]=temp;
    }
    printf("\ninsertion sorted sequence:");
     for(i=0; i<n; i++)printf("%d ",ara2[i]);
    printf("\ninsertion sort swap num=\n%d",in);

   return 0;
}
