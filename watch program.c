#include<stdio.h>
int main()
{
    int i,j,n;

    for(i=0; i<12; i++)
    {
        for(j=0; j<=59; j++)
        {
            for(n=0; n<=59; n++)

                printf("%d:%d:%d\n",i,j,n);
        }

        if(i==11)
        {
            i=-1;
        }
    }
    return 0;
}
