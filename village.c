#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        char str[1000000];

        int i,j,n,counta=0,countb=0,p=0,dot=0;

        scanf(" %[^\n]",str);

        n=strlen(str);

        for(i=0; i<n; i++)
        {
            j=i;
            if(str[i]=='A')
            {
                counta++;
                dot=0;

                for(i=j+1; i<n; i++)
                {
                    if(str[i]=='.')dot++;

                    else
                    {
                        if(str[i]=='A')
                        {
                            counta=dot+counta+1;
                            dot=0;
                        }
                        else
                        {
                            i--;
                            break;
                        }
                    }

                }

            }
            else if(str[i]=='B')
            {
                countb++;
                dot=0;
                for(i=j+1; i<n; i++)
                {
                    if(str[i]=='.')dot++;
                    else
                    {

                        if(str[i]=='B')
                        {
                            countb=dot+countb+1;
                            dot=0;
                        }
                        else
                        {
                            i--;
                            break;
                        }

                    }
                }
            }



        }
        printf("%d %d\n",counta,countb);
    }

    return 0;

}
