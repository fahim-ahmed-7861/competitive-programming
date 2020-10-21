#include<stdio.h>
int main()
{
    int i,j,n=6,temp,k;
    int ara[6]= {18,17,25,19,50,3};

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ara[i]>ara[j])
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
             /*  for(k=0; k<n; k++)
                {
                    printf("%d ",ara[k]);
                }
                printf("\n");*/
            }

        }
    }
    for(i=0; i<n; i++)
                {
                    printf("%d ",ara[i]);
                }

    return 0;
}

