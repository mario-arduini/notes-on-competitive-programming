#include <cstdio>
int main(){
	int t,cur,next,h,l,i;
	scanf(" %d",&t);
	printf("Lumberjacks:\n");
	while(t--){
		h = l = 1;
		i=9;
		scanf(" %d",&cur);
		while(i--){
			scanf(" %d",&next);
			if(cur<next) l=0;
			else if(cur>next) h=0;
			cur=next;
		}
		if(h||l) printf("Ordered\n");
		else printf("Unordered\n");
	}
	return 0;
}
