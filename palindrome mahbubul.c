#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,ara[1000],x,ans,k=0;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        x=i;
        ans=0;
       while(x) {
		ans = ans * 10 + x % 10;


		x = x / 10;
	}

        if(ans==i)
        {
            ara[k]=i;

            k++;
        }
    }
    i=k;
    for(k=0; k<i; k++)
    {
        printf("%d\n",ara[k]);
    }

}
