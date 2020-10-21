#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	scanf("%d",&n);

	cin.ignore();

	string str;
	getline(cin,str);

	for(i=0; i<n-1; i++)
	{
	    if(str[i]==str[i+1] && str[i]!='?')
        {
            goto xx;
        }
	}
	if(str[0]=='?' || str[n-1]=='?')goto yy;

	for(i=0; i<n; i++)
    {
        if(str[i]=='?')
        {
            if(str[i-1]=='?' || str[i+1]=='?' || str[i+1]==str[i-1])goto yy;
        }
    }

	xx:printf("No\n");
	return 0;

     yy:printf("Yes\n");
	return 0;
}
