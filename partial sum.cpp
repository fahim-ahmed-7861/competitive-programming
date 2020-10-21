#include<bits/stdc++.h>
using namespace std;


void Vector()
{

     vector<int>v{1,2,3,4,5};

    vector<int>bra(5);

    int n=5;


    partial_sum(v.begin(),v.end(),bra.begin());


    for(auto x : bra)
        cout<<x<<" ";
}

void ARA()
{
     int ara[]={1,2,3,4,5};

    int bra[5];

    int n=5;


    partial_sum(ara,ara+n,bra);


    for(auto x : bra)
        cout<<x<<" ";

}
int main()
{


        Vector();


}
