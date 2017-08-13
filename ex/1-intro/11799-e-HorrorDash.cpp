#include <cstdio>
int main(){
	int t,i=0,n,max,cur;
	scanf("%d",&t);
	while(i++<t){
		scanf(" %d",&n);
		max=0;
		while(n--){
			scanf(" %d",&cur);
			if(cur>max) max=cur;
		}
		printf("Case %d: %d\n",i,max);
	}
	return 0;
}
