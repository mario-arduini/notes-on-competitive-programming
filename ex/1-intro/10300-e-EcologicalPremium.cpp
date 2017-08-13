#include <cstdio>
int main(){
	int n,f,area,green,mon;
	scanf("%d\n",&n);
	while(n-->0){
		scanf("%d\n",&f);
		mon = 0;
		while(f-->0){
			scanf(" %d %*d %d",&area,&green);
			mon += area * green;
		}
		printf("%d\n",mon);
	}
	return 0;
}
