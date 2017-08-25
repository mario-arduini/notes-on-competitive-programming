#include <cstdio>
int main(){
	int l,h,cur,pre,num;
	while(scanf(" %d %d",&h,&l),h&&l){
		scanf(" %d",&pre);
		num=h-pre;
		while(--l){
			scanf(" %d",&cur);
			if(cur<pre) num+=pre-cur;
			pre=cur;
		}
		printf("%d\n",num);
	}
	return 0;
}
