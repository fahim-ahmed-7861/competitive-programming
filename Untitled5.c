nt coins[5]={1,5,10,25,50};

int findChange(int amount){
	int combinations[amount+1];

	combinations[0]=1;
	for(int x=1;x<=amount;x++)
		combinations[x]=0;
	int sizeOfCoins=sizeof(coins) / sizeof(int);
	int length=sizeof(combinations) / sizeof(int);


	int coin=0;
	combinations[0]=1;
	for(int x=0;x<sizeOfCoins;x++){
		coin=coins[x];

		for(int i=1;i<=length;i++) {
			if(i>=coin) {
						combinations[i]+=combinations[i-coin];

						}
		}
	}




	return combinations[amount];
}

int main() {

    int amount ;

    while(scanf("%d",&amount)==1)
    {
	printf("%d\n",findChange(amount));
    }

    return 0;

}
