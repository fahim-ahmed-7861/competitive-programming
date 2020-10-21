// std :: upper_bound with arrays
#include <bits/stdc++.h>
using namespace std;

// Main Function
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(i=0; i<n; i++)cin>>ara[i];

    // Print elements of array
   /* cout << "Array contains :";
    for (int i = 0; i < 5; i++)
        cout << " " << arr[i];
    cout << "\n";*/

    sort(arr,arr+n);

    reverse(arr,arr+n);
    // using upper_bound
    int upper1 = upper_bound(arr, arr+5, 3) - arr;
    int upper2 = upper_bound(arr, arr+5, 4) - arr;

    cout << "\nupper_bound for element 35 is at position : "
              << (upper1);
    cout << "\nupper_bound for element 45 is at position : "
              << (upper2);

    return 0;
}
