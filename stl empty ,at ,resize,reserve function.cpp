#include<bits/stdc++.h>

using namespace std;

int main() {

   int n,length;
   int p;
  //scanf("%d",&n);
   vector<int> v;
   v.reserve(10);
   //vector<int> fa;
    printf("%d\n",v.empty());
    scanf("%d",&n);
   int i;

   for(i=0; i<n; i++)
   {
       cin>>p;
       v.push_back(p);
   }

    for(i=0; i<n; i++)printf("%d\n",v[i]);

   // v.resize(9);
    v.push_back(34);
    //n=v.size();
    v.at(2)=33;

      for(i=0; i<v.size(); i++)printf("%d\n",v[i]);


        printf("%d\n",v.empty());

       if(v.empty()==0) printf("Not empty\n");

       else printf("empty\n");
     //  fa.reserve(100);
   //    printf("reserve:%d",fa.size());

     //  for(i=0; i<fa.size(); i++)printf("%d ",fa.at(i));
   return 0;


}

