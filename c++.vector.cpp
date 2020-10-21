#include<bits/stdc++.h>

using namespace std;

int main() {

   int n,length;
   int p;
  scanf("%d",&n);
   vector<int> v;
   int i;

   for(i=0; i<n; i++)
   {
       cin>>p;
       v.push_back(p);
   }

    for(i=0; i<n; i++)printf("%d\n",v[i]);

   for(i=v.size(); i>1; i--)v.pop_back();
     printf("%d\n\n",v.size());

     for(i=0; i<=v.size(); i++)printf("%d\n",v[i]);
   return 0;

}

