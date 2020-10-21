#include<bits/stdc++.h>

using namespace std;

int main() {

   int n,length;
   int p,i;
  //scanf("%d",&n);
  int ara[]={4,5,6,3,222};
   list<int>l(ara,ara+5);
  list<int>::iterator it;
  list<int>::iterator h;

   //it=l.begin();
  // it++;
 //  l.insert(it,2,1000);
  //   h=l.begin();

   /*for(i=0; i<7; i++,h++)printf("%d\n",*h);
   printf("%d\n",*it);*/

   it=find(l.begin(),l.end(),111);

   printf("%d\n",*it);
  //  vector<int>::iterator it;

   // it++;

  //  for(i=v.begin(); i>=-1; i--,it--)cout<<*it<<" ";

   return 0;


}

