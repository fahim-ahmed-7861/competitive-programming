#include<stdio.h>
int euler(int n)
{
    int ret=n,i;
    for(i=2; i*i<=n; i++){
    if(n%i==0)
    {
        while(n%i==0)
        {
            n/=i;
        }
        ret-=ret/i;
    }
}
//printf("%d %d\n",ret,n);
if(n>1)
{
    ret-=ret/n;
}
    return ret;

}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",euler(n));
}
