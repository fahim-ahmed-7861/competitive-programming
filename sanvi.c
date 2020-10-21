#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,n,count,sum;
    char str[10000],ch[10];
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        sum=0;

        scanf("%d",&n);

        scanf("%s",str);



        ch[0]=str[0];

        for(i=0; i<n; i++)
        {
             if(str[i]!=ch[0])count++;
        }
        if(count==0)
        {
            printf("%d\n",count);
            continue;
        }

        else{
                sum=count;

        for(i=1; i<n; i++)
        {
            ch[0]=str[i];
        count=0;

            for(i=0; i<n; i++)
            {
                if(str[i]!=ch[0])count++;
            }
            if(sum>count)sum=count;
        }
        printf("%d\n",sum);

        }
    }
    return 0;
}
