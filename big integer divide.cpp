#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long bhajok,bhagsesh=0;

    string bajjo,str;

    cin>>bajjo>>bhajok;

    int len=bajjo.size();

    for(int i=0; i<len; i++)
    {
        bhagsesh=((bhagsesh*10)+(bajjo[i]-'0'));

          if(bhagsesh/bhajok)
          {
              str+=to_string(bhagsesh/bhajok);

              bhagsesh%=bhajok;
          }
    }

    cout<<"Bhagsesh: "<<bhagsesh<<endl;

    cout<<"Bhafol : "<<str<<endl;
}
