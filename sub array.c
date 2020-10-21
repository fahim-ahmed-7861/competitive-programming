//deChef submission 15528656 (C) plaintext list. Status: AC, problem SUBINC, contest CODECHEF. By msupriya1999 (msupriya1999), 2017-09-26 14:39:07.

    #include <stdio.h>
     int main() {
        int t,i;
        scanf("%d",&t);
        while(t--){
            int n,i;
            scanf("%d",&n);
            int a[n],b[n];
            for(i=0;i<n;i++){
               scanf("%d",&a[i]);
            }
            for(i=0;i<n;i++){
               if(i==0){
                   b[i]=1;
               }else if(a[i]>=a[i-1]){
    				b[i]=b[i-1] +1;
    			}
    			else if (a[i]<a[i-1]){
    				b[i]=1;
    			}
    		}
    		int sum=0;
    		for(i=0;i<n;i++){
    			sum+=b[i];
    		}
    		printf("%d\n",sum);
        }
        return 0;
     }
