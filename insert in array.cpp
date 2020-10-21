#include<bits/stdc++.h>
using namespace std;
int n=0;
int ara[1];
void print( )
{
	for(int i=0; i<n; i++){
		printf("%d", ara[i]);
		if(i==n-1){
			printf("\n");
		} else{
			printf(" ");
		}
	}
}

void Insert(int pos,int value)
{
    int i;
    n++;
    ara[n+1];

    cout<<n<<endl;

      for(i=n; i>pos; i--)
      {
          ara[i]=ara[i-1];
      }
      ara[pos]=value;
}
void Delete(int pos)
{
    int i;
    for(i=pos; i<n; i++)
    {
        ara[i]=ara[i+1];
    }
    n--;
}

int main()
{
    int m,i,t,pos,value;

    cin>>n;
     ara[n+1];

    for(i=0; i<n; i++)cin>>ara[i];
     //print(n);


    /*cout<<"How many insert"<<endl;

    cin>>t;

    while(t--)
    {
        cin>>pos>>value;

        if(pos>=n)continue;

       Insert(pos,value);

         print();
    }*/
    cout<<"How many delete"<<endl;

    cin>>t;

   while(t--)
    {
        cin>>pos;

        if(pos>=n)
        {
            cout<<"INVALID POSITION"<<endl;
            continue;
        }


       Delete(pos);

         print();
    }
}
