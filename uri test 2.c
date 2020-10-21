include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string str;
        getline(cin,str);
        string a[51];
        int A[51];
        int J=0;
        bool c=true;
        string d;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' '){
                a[J]=d;
                A[J]=d.length();
               d.clear();
                J++;
                c=false;
            }
            else
            {
                d=d+str[i];
                c=true;
            }
        }
