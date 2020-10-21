#include<stdio.h>
#include<string.h>


int main()
{

    int n,temp;

    scanf("%d",&n);

    int i,ara[n+1];

    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);

    int j=n-1;

    for(i=0; i<n/2; i++,j--)
    {
        if(i%2==0)
        {
            temp=ara[i];
            ara[i]=ara[j];

            ara[j]=temp;
        }
    }

    for(i=0; i<n; i++)
        printf("%d ",ara[i]);
}
