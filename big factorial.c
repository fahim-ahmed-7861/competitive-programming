#include<stdio.h>
#define MAX 5000
void factorial(int n)
{
    int result[MAX];
    result[0]=1;
    int i,res_size=1;
    for(i=2;i<=n;i++)res_size=multiply(i,result,res_size);
    printf("FACTORIAL OF GIVEN NUMBER IS\n");
    for(i=res_size-1;i>=0;i--)printf("%d",result[i]);
}

int multiply(int x,int res[],int res_size)
{
    int i,carry=0;
    for(i=0;i<res_size;i++)
    {
        int prod=res[i]*x+carry;
        res[i]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    return res_size;
}

int main()
{
    int n;
    scanf("%d",&n);
    factorial(n);
    return 0;
}
