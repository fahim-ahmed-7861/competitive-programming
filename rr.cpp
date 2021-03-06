#include<stdio.h>
typedef struct
{
    int item;
    int value;
    int weight;
}knap_sack;
int main()
{
    knap_sack knapsack[100];
    int n,i,j,array[100],k=0,maxweight,maxVal=0;
    printf("How many item do you have?\n");
    scanf("%d",&n);
    printf("Enter item number, its value and weight\n");
    for(i=0;i<n;i++)scanf("%d %d %d",&knapsack[i].item,&knapsack[i].value,&knapsack[i].weight);
    printf("Enter maximum weight\n");
    scanf("%d",&maxweight);
    int table[n+1][maxweight+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=maxweight;j++)
        {
            if(i==0 || j==0)table[i][j]=0;
            else if(j-knapsack[i-1].weight<0)table[i][j]=table[i-1][j];
            else
            {
                if(table[i-1][j-knapsack[i-1].weight]+knapsack[i-1].value>table[i-1][j])
                    table[i][j]=table[i-1][j-knapsack[i-1].weight]+knapsack[i-1].value;
                else table[i][j]=table[i-1][j];
            }
        }
    }
    i=n,j=maxweight;
    while(i>=0 && j>=0)
    {
        if(table[i][j]==0)break;
        else
        {
            if(table[i-1][j]<table[i][j])
            {
                maxVal=knapsack[i-1].value+maxVal;
                array[k++]=knapsack[i-1].item;
                j=j-knapsack[i-1].weight;
                i=i-1;
            }
            else i=i-1;
        }
    }
    printf("\nMaximum price is %d \n",maxVal);
    printf("Items are\n");
    for(i=k-1;i>=0;i--)printf("%d ",array[i]);
    return 0;
}
