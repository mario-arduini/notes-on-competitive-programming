#include <cstdio>
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf(" %d",&n);
		n = (((n*63)+7492)*5)-498;
		n/=10;
		printf("%d\n",n<0 ? -n%10 : n%10);
	}
	return 0;
}
