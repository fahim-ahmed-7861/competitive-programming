#include<bits/stdc++.h>
using namespace std;
int c=0;
int ascending(const void* a,const void* b)
{

    if ( *(int*)a <=  *(int*)b ) c++;
    return (*(int*)a-*(int*)b);
}

int descending(const void* a,const void* b)
{
    return (*(int*)b-*(int*)a);
}

void print(int ara[],int n)
{
    int i;
    for (i=0; i<n; i++)
    printf ("%d ",ara[i]);
    cout<<endl;
}

int main()
{
    int n,i;
    cin>>n;
    int ara[n];

    for(i=0; i<n; i++)cin>>ara[i];

    qsort(ara,n,sizeof(int),ascending);

     print(ara,n);

    /*qsort(ara,n,sizeof(int),descending);

    print(ara,n);*/

    cout<<c;
}
