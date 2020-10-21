#include<stdio.h>

int main()
{
    int n,cnt=0,mark,i;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&mark);

        if(mark>=80)cnt++;
    }
    printf("%d\n",cnt);
}

