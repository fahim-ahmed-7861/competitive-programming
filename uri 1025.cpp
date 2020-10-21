#include<bits/stdc++.h>
using namespace std;
int ara[10005], item, pos;

void bsearch(int low, int high){
    if(low<=high){
        int middle = (low+high)/2;
        if(ara[middle]==item)
            pos = middle;
        if(item < ara[middle]) bsearch(low, middle-1);

        else bsearch(middle+1, high);
    }
    else return;
}

int main ()
{
    int n, q, k = 1;
    while (scanf("%d %d",&n,&q)==2){
        if (n == 0 && q == 0)
            break;
        for (int i = 0; i < n; i++)
            cin >> ara[i];
        sort(ara, ara+n);
       printf("CASE# %d:\n",k++);
        while (q--){
            cin >> item;
            pos = -1;
            bsearch(0, (n-1));
            if (pos < 0)
                cout << item << " not found" << endl;
            else
                cout << item << " found at " << (pos+1) << endl;
        }
    }
    return 0;
}
