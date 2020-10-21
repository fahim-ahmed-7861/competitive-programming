#include<bits/stdc++.h>

using namespace std;

int main() {

   int n,length;
   int p,i;
  //scanf("%d",&n);
  int ara[]={4,5,6,3,222};
  int ara2[]={40,50,60,30,22,322,33};
   list<int>l(ara,ara+5);
    list<int>l2(ara2,ara2+7);
  list<int>::iterator it;
  list<int>::iterator h;

   it=l.begin();
   it++;
  //l.insert(it,6,1000);
  // l.insert(it,3,10);
    //l.insert(it,2,1000);
    // h=l.begin();

     //l.unique();
    // l.sort();
     // l.unique();
     // l.reverse();
     // l.merge(l2);
     it=find(l.begin(),l.end(),222);

     printf("%d\n",*it);

     if(it!=l.end())printf("Found\n");

     else printf("Not found\n");

   for(it=l.begin() ; it!=l.end(); it++)printf("%d\n",*it);
  // printf("%d\n",*it);
  //  vector<int>::iterator it;

   // it++;

  //  for(i=v.begin(); i>=-1; i--,it--)cout<<*it<<" ";

   return 0;


}

