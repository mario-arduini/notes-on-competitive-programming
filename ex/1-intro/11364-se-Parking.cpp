#include <cstdio>
int main(){
	int t,min,max,shops,cur;
	scanf("%d",&t);
	while(t--){
		scanf(" %d",&shops);
		scanf(" %d",&cur);
		min=max=cur;
		while(--shops){
			scanf(" %d",&cur);
			if(cur>max) max = cur;
			else if(cur<min) min = cur;
		}
		printf("%d\n",(max-min)*2);
	}
}
