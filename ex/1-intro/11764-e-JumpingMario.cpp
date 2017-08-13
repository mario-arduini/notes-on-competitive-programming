#include <cstdio>
int main(){
	int t,i=0,n,cur,next,low,high;
	scanf(" %d",&t);
	while(i++<t){
		scanf(" %d",&n);
		low = high =0;
		scanf(" %d",&cur);
		while(--n){
			scanf(" %d",&next);
			if(cur<next) high++;
			else if(next<cur) low++;
			cur = next;
		}
		printf("Case %d: %d %d\n",i,high,low);
	}
	return 0;
}
