#include<bits/stdc++.h>
using namespace std;

int low,high;

int b_search(vector<int>v,int k)
{
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;

        if(v[mid]==k)
        {
            low=mid-1;
            high=mid+1;
            return 0;
        }
        if(k>v[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    high=low;
    low=low-1;
}

int main()
{
    vector<int>v;
    int n,k,q,p;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>k;
        if(i==0)
            v.push_back(k);
        if(i>=1 && k!=v[i-1])
            v.push_back(k);
    }

    cout<<v.size()<<endl;

    scanf("%d",&q);

    while(q--)
    {
        low=0;
        high=v.size()-1;
        scanf("%d",&p);
        b_search(v,p);
        if (low == -1)
            cout << "X";
        else
            cout << v[low];
        cout << " ";
        if (high == v.size())
            cout << "X";
        else
            cout << v[high];
        cout << endl;
    }
    return 0;
}
