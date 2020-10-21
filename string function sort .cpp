#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name[20][20],temp[20];

    int i,j,n=6;

    for(i=0; i<n; i++)
    {
        scanf("%s",name[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(strlen(name[i])<strlen(name[j]))
            {
                strcpy(temp,name[i]);

                strcpy(name[i],name[j]);

                strcpy(name[j],temp);
            }
        }
    }
    cout<<"sorted"<<endl;

     for(i=0; i<n; i++)
    {
       cout<<name[i]<<endl;
    }
}
