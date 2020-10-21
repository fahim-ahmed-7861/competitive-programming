#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>::iterator it;

    int n,num,i;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num);

        vector<int>::iterator iv=lower_bound(v.begin(),v.end(),num);

        if(v.end()==iv)v.push_back(num);

        else v[iv-v.begin()]=num;

        for(it=v.begin(); it!=v.end(); it++)printf("%d ",*it);

        printf("\n\n");
    }

    for(it=v.begin(); it!=v.end(); it++)printf("%d ",*it);

    printf("LIS : %d\n",v.size());
}
