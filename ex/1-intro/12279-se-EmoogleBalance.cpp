#include <cstdio>
int main(){
	int n,cur,i=1,bal;
	scanf("%d",&n);
	while(n){
		printf("Case %d: ",i++);
		bal=0;
		while(n--){
			scanf(" %d",&cur);
			cur ? bal++ : bal--;
		}
		printf("%d\n",bal);
		scanf(" %d",&n);
	}
	return 0;
}
