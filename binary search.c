#include<stdio.h>
int main()
{
    int ara[]={1,2,5,6,7,8,9,11,12,33,55,66,78,89},num;
    scanf("%d",&num);
    int low_indx=0,high_indx=13,mid_indx;

    while(low_indx<=high_indx)
    {
        mid_indx=(low_indx+high_indx)/2;

        if(num==ara[mid_indx])
        {
            break;
        }
        if(num<ara[mid_indx])
        {
            high_indx=mid_indx-1;
        }
        else
        {
            low_indx=mid_indx+1;
        }
    }
    if(low_indx>high_indx)
    {
        printf("%d is not found\n",num);
    }
    else
        {
            printf("%d is found at position:%dth num element of array\n",num,mid_indx);
        }
    }
