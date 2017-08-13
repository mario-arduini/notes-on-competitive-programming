#include <cstdio> // WA
int main(){
	int t,w,r,g1,g2,gap;
	scanf("%d",&t);
	while(t--){
		scanf(" %d",&w);
		r=1;
		scanf(" %d %d",&g1,&g2);
		gap = g1-g2;
		while(--w){
			scanf(" %d %d",&g1,&g2);
			if(g1-g2!=gap){
				r=0;
				break;
			}
		}
		if(r) printf("yes\n");
		else printf("no\n");
		if(t) printf("\n");
	}
	return 0;
}

