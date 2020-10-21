#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[50],ch[50],metch[25];
    int i,j,c,r,k,p;

    scanf("%s %s",str,ch);


    c=strlen(str);
    r=strlen(ch);

    char sign[r+5][c+5];

    int lcs[r+5][c+5];

    for(i=0; i<=r; i++)
    {
        lcs[i][0]=0;
        sign[i][0]='0';
    }
    for(i=0; i<=c; i++)
    {
        lcs[0][i]=0;
        sign[0][i]='0';
    }


    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++ )
        {

            if(ch[i]==str[j])
            {
                lcs[i+1][j+1]=lcs[i][j]+1;

                sign[i+1][j+1]='D';

            }

            else
            {
                if(lcs[i][j+1]>=lcs[i+1][j])
                {
                    lcs[i+1][j+1]=lcs[i][j+1];

                    sign[i+1][j+1]='U';
                }

                else
                {
                    lcs[i+1][j+1]=lcs[i+1][j];

                    sign[i+1][j+1]='L';
                }

            }

        }
    }

    for(i=0; i<=r; i++)
    {
        for(j=0; j<=c; j++)
        {

            {
                printf("%d ",lcs[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\n");

    for(i=0; i<=r; i++)
    {
        for(j=0; j<=c; j++)
        {

            {
                printf("%c ",sign[i][j]);
            }
        }
        printf("\n");
    }



    i=r;
    j=c;
    k=0;
    while(i>=0 && j>=0)
    {
        if(sign[i][j]=='U')
        {
            i--;
        }
        else if(sign[i][j]=='L')
        {
            j--;
        }
        else if(sign[i][j]=='D')
        {
            metch[k++]=ch[i-1];
            i--;
            j--;

        }
        else if(sign[i][j]=='0')
            break;
    }
    metch[k]='\0';

    strrev(metch);

    printf("%s\n",metch);

}
