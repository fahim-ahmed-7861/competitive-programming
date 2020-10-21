#include<stdio.h>
int main()
{
    int hour,min,sec,k;

    for(hour=0; hour<12; hour++)
    {
        for(min=0; min<=59; min++)
        {
            for(sec=0; sec<=59; sec++)
            {


                for(k=1;k<=512500000;k++){  }
                printf("%d:%d:%d\n",hour,min,sec);}




        }

        if(hour==11)
        {
            hour=-1;
        }
    }
    return 0;
}

