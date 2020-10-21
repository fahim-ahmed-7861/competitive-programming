#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,s,p;

    cin>>a>>b;

    s=a*b;

    p=2*(a+b);

    //cout<<setprecision(3)<<fixed;

    cout<<fixed;

    cout <<"ketrofol holo "<<s<<" borgometer"<<endl;

    cout<<"porishima holo "<<setprecision(2)<<p<<" meter\n";

    return 0;
}
