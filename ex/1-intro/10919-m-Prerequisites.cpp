#include <cstdio>
int main(){
	int num,cat,i,n,min,cur,flag;
	while(scanf(" %d",&num),num){
		int c[num];
		flag=1;
		scanf(" %d",&cat);
		for(i=0;i<num;i++) scanf(" %d",c+i);
		while(cat--){
			scanf(" %d %d",&n,&min);
			while(n--){
				scanf(" %d",&cur);
				for(i=0;flag&&i<num;i++) if(cur==c[i]){
					min--;
					break;
				}
			}
			if(min>0) {
				flag=0;
			}
		}
		if(flag) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
