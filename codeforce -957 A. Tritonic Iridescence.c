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
	    if(str[i]==str[i+1])break;
	}
	if(i==n)printf("Yes\n");

	else printf("No\n");

	return 0;
}
