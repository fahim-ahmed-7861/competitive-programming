#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;

    while(getline(cin, str))
    {
        int n=str.size(),i,k=0;

        for(i=0; i<n; i++)
        {
            if((str[i]>='a' and str[i]<='z') or ((str[i]<='Z')and(str[i]>='A')))
            {
                if(k%2==0)
                {
                    if(str[i]>='a' && str[i]<='z')
                        str[i]=str[i]-32;

                        cout<<str[i];
                }
                else
                {
                    if(str[i]>='A' and str[i]<'Z')
                        str[i]=str[i]+32;

                        cout<<str[i];
                }

                k++;
            }

            else cout<<str[i];


        }
       // cout<<endl;
    }
    return 0;
}
