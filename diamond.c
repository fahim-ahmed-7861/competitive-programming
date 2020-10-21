#include<stdio.h>
int main()
{
    int i,p,n,j,k=0;
    scanf("%d",&p);


    n=(p+1)/2;


    for(i=1; i<=p; i++)
    {


        if(i<=n)

        {

            k++;
        }
        else
        {
            k--;
        }
        for(j=1; j<=p; j++)
        {
            if(j>=n+1-k&&j<=n-1+k)

                printf("*");


            else

                printf(" ");

        }
        printf("\n");
    }
    return 0;
}
