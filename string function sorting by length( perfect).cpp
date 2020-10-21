#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        bool c=true;
        string str,ch,sh;
        getline(cin,str);
        string name[52];
       n=0;
        string d;
        for(i=0;i<str.length();i++)
        {
            if(str[i]==' '){
                name[n]=d;
               d.clear();
                n++;
            }
            else
            {
                d=d+str[i];
            }
        }

        name[n]=d;
        n++;


    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            ch=name[j];
            sh=name[j+1];

            if(ch.size()<sh.size())
            {
              swap(name[j],name[j+1]);

            }
        }
      }

    for(i=0;i<n-1;i++)
        {
            cout<<name[i]<<" ";
        }
        cout<<name[n-1]<<endl;
    }
    return 0;
}

