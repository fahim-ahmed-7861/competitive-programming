#include <iostream>
#include <iomanip>
using namespace std;

int main( )
{
    double l;
    int i,j,k;

    cin >>i>>j>>k;
     cout << fixed;
    cout << setprecision(1);


    l=1.0*i/j;

   cout <<i<<" "<<j<<" "<<k<<" "<<l<<endl;


   return 0;
}
