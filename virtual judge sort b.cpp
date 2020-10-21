#include<bits/stdc++.h>

using namespace std;
int n,m;
int a[100010];
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	sort(a,a+n);
	while(m--){
		int x;
		cin>>x;
		cout<<upper_bound(a,a+n,x)-a<<endl;
	}
}
