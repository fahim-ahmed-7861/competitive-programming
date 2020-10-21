#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

xx:
    while(t--)
    {
        char str[1000000];

        int i,n,p,j,k,h;

        scanf("%d %d",&n,&p);

        if(p==1 || n==2 || n%p!=0)
        {
            printf("impossible\n");
            goto xx;
        }
        else if(n%p==0)
        {
            k=n/p;

            if(p%2==1)
            {
                if(k%2==1)
                {
                    for(i=0; i<n; i++)
                    {
                        if(i%2==0)str[i]='a';
                        else str[i]='b';
                    }
                    str[n]='\0';
                }
                else
                {
                    for(i=0; i<n; i++)
                    {
                        str[i]='a';
                        str[++i]='b';
                        str[++i]='a';
                    }
                    str[n]='\0';
                }
            }
            else
            {
                {
                    h=n/2;

                    for(i=0; i<h; i++)
                    {
                        str[i]='a';
                        str[++i]='b';
                    }

                    str[i]='b';
                    j=i;
                    for(i=j+1; i<n-1; i++)
                    {
                        str[i]='a';
                        str[++i]='b';
                    }
                    str[i]='a';

                   str[n]='\0';
                }
            }
            printf("%s\n",str);
        }

    }
    return 0;

}
