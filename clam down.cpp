#include<bits/stdc++.h>
using namespace std;
#define pi acos(0.0)*2
int main()
{
      double r,R,z;

      int i,t,a,n,p=0;

      scanf("%d",&t);

      while(t--)
      {
          scanf("%lf",&R);
          scanf("%d",&n);


          r=((sin(pi/n)*R)/(sin(pi/n)+1));

           a = (int)r;

          z = (r*1.0) / a;
        if(z != 1)
            printf("Case %d: %.10lf\n", ++p, r);
        else
            printf("Case %d: %.0lf\n",++p, r);
      }
        return 0;

}
