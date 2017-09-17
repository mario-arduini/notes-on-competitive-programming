#include <cstdio>
#include <cmath>
#include <cstdint>
int main(){
	int t,deg,d,k,p[21],n,i;
	unsigned long long val;
	scanf(" %d",&t);
	while(t--){
		scanf(" %d",&deg);
		for(i=0;i<=deg;i++) scanf(" %d",p+i);
		scanf(" %d",&d);
		scanf(" %d",&k);
		for(n=1;(k-=n*d)>0;n++) ;
		val=p[0];
		for(i=1;i<=deg;i++) val+=p[i]*(unsigned long long)pow(n,i);
		printf("%llu\n",val);
	}
	return 0;
}
