#include<stdio.h>
void recurse()

{
    static int count=1;
    if(count>5)
    {
        return;
    }
    printf("Count = %d\n",count);
    count = count+1;
    recurse();
    return;
}
void shjib()
{
    int count;
    recurse();
    printf("Count = %d\n",count);
    return;
}
int main()
{
    recurse();
    return 0;
}
