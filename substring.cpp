#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="fahim ahmed";

    int pos=s1.find("ahmed");

    string s_copy=s1.substr(pos+1);

    string s2=s1.substr(2,3);

    cout<<"substring copy:" <<s_copy<<endl;

    cout<<"substring position: "<<pos<<endl;

    cout<<"substring print: "<<s2<<endl;

    cout<<s1.size();
}
