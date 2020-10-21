#include<bits/stdc++.h>

using namespace std;

int main() {

   int n,i,length;
   int p;
  scanf("%d",&n);
  deque<int>dq(n);
  //vector<int>v(n);


 for(i=0; i<n; i++)
 {
     cin>>p;
    dq.push_front(p);
 }
  for(i=0; i<n; i++)
 {
    cout<<dq[i]<<" ";
 }
 cout<<endl;
 dq.pop_front();

    sort(dq.begin(),dq.end());

   // dq.clear();
   for(i=0; i<n; i++)
 {
    cout<<dq[i]<<" ";
 }

   return 0;


}

