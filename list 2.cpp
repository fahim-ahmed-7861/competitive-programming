//set code in C++
#include<bits/stdc++.h>
using namespace std;
void printlist(list <int> s)
{
    list <int> :: iterator it;

    printf("{ ");
    for(it = s.begin(); it != s.end(); ++it)
        cout<<*it<<" ";

    cout <<"}"<<endl<<endl;
}
int main()
{
    int n,m,j=0,i,unioin[1000];

    printf("How many element in set A:\n");

    scanf("%d",&n);

    int set1[n+5];

    printf("Input all input of set A:\n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&set1[i]);

        unioin[j++]=set1[i];
    }

    printf("How many element in set B:\n");

    scanf("%d",&m);

    int set2[m+5];

    printf("Input all input of set B:\n");

    for(i=0; i<m; i++)
    {
        scanf("%d",&set2[i]);
        unioin[j++]=set2[i];
    }

    list<int>s(set1,set1+n);

    list<int>p(set2,set2+m);

    list<int>l(unioin,unioin+j);

    list<int>ans;

    list<int>::iterator it;
    list<int>::iterator pt;


    s.sort();
    p.sort();
    l.sort();

    s.unique();
    p.unique();
    l.unique();

    printf("\n\nOutput\n\n");

    int k=0,size1=s.size(),size2=p.size();


    printf("Cartesain product: {");

    for(it = s.begin(),i=0; it != s.end(); ++it,i++)
    {
        for(pt=p.begin(),j=0; pt!=p.end(); j++,pt++)
        {
            if(*it==*pt)
                ans.push_back(*it);



            printf("(%d %d)",*it,*pt);

            if(i!=size1-1 || j!=size2-1)
                printf(",");

        }
    }
    printf("}\n\n");

    printf("A unioin B : ");

    printlist(l);

    printf("Cardinality number of |A U B|: %d\n\n",l.size());

    printf("A intersection B : ");

    printlist(ans);

    printf("Cardinality number of |A intersection b|: %d\n\n",ans.size());

    if(ans.size()==0)
        printf("A and B are disjoint\n");

    else
        printf("A and B are not disjoint.\n");


    return 0;

}
