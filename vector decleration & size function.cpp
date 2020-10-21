#include<bits/stdc++.h>
using namespace std;
int main() {

   // create a vector to store int
   int n,length;
   char p;
   scanf("%d %c",&n,&p);
   vector<int> v(n,p);


   int i;
  // char p;
    length=v.size();
   // display the original size of vec
   printf("size:%d\n",length);
   //cout << "vector size = " << v.size() << endl;

   // push 5 values into the vector
     /* for(i=0; i<length; i++)
      {
          printf("%c\n",v[i]);
      }*/

      vector<int>::iterator it;
      v.push_back(35);

      for(it=v.begin(); it!=v.end(); it++)printf("%d ",*it);
   return 0;

   // display extended size of vec
}

