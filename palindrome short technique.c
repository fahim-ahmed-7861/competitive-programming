
#include <stdio.h>


int pali(int x)
{
	int ans;
	int temp;

	temp = x;
	ans = 0;

	while(x) {
		ans = ans * 10 + x % 10;


		x = x / 10;
	}

	return ans == temp;
}


int main()
{

	int x,cs;
	int t;
	scanf("%d", &t);

	for (cs = 1; cs <= t; cs++) {
		scanf("%d", &x);
		pali(x) ? printf("Case %d: Yes\n", cs) : printf("Case %d: No\n", cs);
	}

}
