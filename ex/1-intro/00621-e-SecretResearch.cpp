#include <cstdio> // WA VERDICT : LOOK INTO IT
int main(){
	int t,n,i;
	scanf("%d\n",&t);
	while(t--){
		scanf(" %d",&n);
		if(n==1||n==4||n==78) printf("+\n");
		else if(n%100==35) printf("-\n");
		else {
			i=n%10;
			while(n>9) n/=10;
			if(i==4&&n==9) printf("*\n");	
			else printf("?\n");	
		} 
	}
	return 0;
}
