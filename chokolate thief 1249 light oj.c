#include<stdio.h>
#include<string.h>
int main()
{
    int t,z;

    scanf("%d",&z);

    for(t=1; t<=z; t++)
    {
    int a1,a2,a3,i,ara[100],n,max,min,p=0,g=0;

    char str[100],str2[100],str3[100];

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%s",str);

        scanf("%d %d %d",&a1,&a2,&a3);

        ara[i]=a1*a2*a3;

        if(i==0)
        {
            max=0;
            min=ara[i];
        }

        if(ara[i]>=max)
        {
            max=ara[i];
            strcpy(str2,str);
            p++;
        }
        if(ara[i]<=min)
        {

            min=ara[i];
            strcpy(str3,str);

            g++;

        }

    }

    //if(p>0 && g>0)printf("Case %d: %s took chocolate from %s\n",t,str2,str3);
     if(min<max)printf("Case %d: %s took chocolate from %s\n",t,str2,str3);

    else printf("Case %d: no thief\n",t);
    }
    return 0;
}
