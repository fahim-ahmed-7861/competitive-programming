#include<stdio.h>
void recurse(int count)
{
    if(count==5)
    {
        return;
    }
    //printf("%d\n",count);
    recurse(count+1);
    //return;
    printf("%d\n",count);
    return ;
}
int main()
{
    recurse(1);

    return 0;
}
