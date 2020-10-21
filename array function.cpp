#include <iostream>
#include <algorithm>

using namespace std;

void show(int a[])
{
    for(int i = 0; i < 10; ++i)
        cout << '\t' << a[i];
}

int main()
{
    int a[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n=10;
    cout << "\n The array before sorting is : ";
    show(a);

   reverse(a,a+n);
    cout << "\n\n The array after Reverse is : ";
    show(a);

    sort(a, a+n);

     cout << "\n\n The array after sorting is : ";
    show(a);

    if (binary_search(a, a + n, 3)==1)
       cout << "\n\nElement found in the array"<<endl;
    else
       cout << "\n\nElement not found in the array"<<endl;

    cout << count(a,a+n, 7);


    return 0;
}
