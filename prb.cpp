#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>s;

    string str;
    char c;
    getline(cin,str);

    int n=str.size(),i;


    for(i=0; i<n; i++)
    {
        if(s.size()!=0 && (str[i]==']' || str[i]=='}' || str[i]==')'))
        {

          if(s.top()=='[' && str[i]==']' || s.top()=='{' && str[i]=='}' || s.top()=='(' && str[i]==')')
            s.pop();

            else
            {

                s.push(str[i]);
                break;
            }
        }


        else
        {
            s.push(str[i]);


        }

    }
    printf("%d",s.size());

}
