#include <cstdio>
int main(){
	int t,i=0,n,c1,c2,cur;
	scanf(" %d",&t);
	while(i++<t){
		scanf(" %d",&n);
		c1=c2=0;
		while(n--){
			scanf(" %d",&cur);
			c1 += (cur/30+1)*10;
			c2 += (cur/60+1)*15;
		}
		printf("Case %d: ",i);
		if(c1<c2) printf("Mile %d\n",c1);
		else if(c1==c2) printf("Mile Juice %d\n",c1);
		else printf("Juice %d\n",c2);
	}
	return 0;
}
