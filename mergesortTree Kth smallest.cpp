// CPP program to implement k-th order statistics
#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000+10;

  vector<int> tree[MAX*5];
typedef  long long ll ;

ll ara[MAX+100];
#define pb push_back
 vector<pair<int, int> > v;

// Constructs a segment tree and stores tree[]
void build_tree(ll l, ll r, ll node)
{
    if(l==r)
    {
        tree[node].pb(v[l].second);

        return ;
    }

    ll mid=(l+r)/2;

    ll left=node*2,right=(node*2)+1;

    build_tree(l,mid,left);
    build_tree(mid+1,r,right);

    merge(tree[left].begin(),tree[left].end(),tree[right].begin(),tree[right].end(),back_inserter(tree[node]));
}
void buildTree(int treeIndex, int l, int r)
{

    /* l => start of range,
        r => ending of a range
        treeIndex => index in the Segment Tree/Merge
                     Sort Tree  */

    /* leaf node */
    if (l == r) {
        tree[treeIndex].push_back(v[l].second);
        return;
    }

    int mid = (l + r) / 2;

    /* building left subtree */
    buildTree(2 * treeIndex, l, mid);

    /* building left subtree */
    buildTree(2 * treeIndex + 1, mid + 1, r);

    /* merging left and right child in sorted order */
    merge(tree[2 * treeIndex].begin(),
          tree[2 * treeIndex].end(),
          tree[2 * treeIndex + 1].begin(),
          tree[2 * treeIndex + 1].end(),
          back_inserter(tree[treeIndex]));
}

// Returns the Kth smallest number in query range
int queryRec(int segmentStart, int segmentEnd,
             int queryStart, int queryEnd, int treeIndex,
                 int K, vector<int> tree[])
{
    /*
        segmentStart => start of a Segment,
        segmentEnd   => ending of a Segment,
        queryStart   => start of a query range,
        queryEnd     => ending of a query range,
        treeIndex    => index in the Segment
                        Tree/Merge Sort Tree,
        K  => kth smallest number to find  */

    if (segmentStart == segmentEnd)
        return tree[treeIndex][0];

    int mid = (segmentStart + segmentEnd) / 2;

    // finds the last index in the segment
    // which is <= queryEnd
    int last_in_query_range =
            (upper_bound(tree[2 * treeIndex].begin(),
                          tree[2 * treeIndex].end(),
                                          queryEnd)
                    - tree[2 * treeIndex].begin());

    // finds the first index in the segment
    // which is >= queryStart
    int first_in_query_range =
                (lower_bound(tree[2 * treeIndex].begin(),
                            tree[2 * treeIndex].end(),
                                        queryStart)
                          - tree[2 * treeIndex].begin());

    int M = last_in_query_range - first_in_query_range;

    if (M >= K) {

        // Kth smallest is in left subtree,
        // so recursively call left subtree for Kth
        // smallest number
        return queryRec(segmentStart, mid, queryStart,
                     queryEnd, 2 * treeIndex, K, tree);
    }

    else {

        // Kth smallest is in right subtree,
        // so recursively call right subtree for the
        // (K-M)th smallest number
        return queryRec(mid + 1, segmentEnd, queryStart,
               queryEnd, 2 * treeIndex + 1, K - M, tree);
    }
}

// A wrapper over query()
int query(int queryStart, int queryEnd, int K, int n,
          vector<pair<int, int> > &a, vector<int> tree[])
{

    return queryRec(0, n - 1, queryStart - 1, queryEnd - 1,
                                               1, K, tree);
}

// Driver code
int main()
{

    int n,q;

    cin>>n>>q;




    // vector of pairs of form {element, index}

    for (int i = 0; i<n; i++) {
        cin>>ara[i];

        v.push_back(make_pair(ara[i], i));
    }

    // sort the vector
    sort(v.begin(), v.end());

    // Construct segment tree in tree[]

    build_tree(0,n-1,1);

    // Answer queries
    // kSmallestIndex hold the index of the kth smallest number

    int l,r,k;



    while(q--)
    {
        cin>>l>>r>>k;

 //  k--;

        int kSmallestIndex = query(l,r,k, n, v, tree);
    cout << ara[kSmallestIndex] << endl;


    }

}
