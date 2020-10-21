#include<stdio.h>
void bubblesort(int num[500],int n)
{
    int i,j,temp;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
}
int main()
{
    int i,n,num[500];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",num[i]);
    }
    bubllesort(num,n);
    for(i=0;i<n;i++)
        {
            printf("%d",num[i]);

    }
    printf("\n");

    return 0;


}
