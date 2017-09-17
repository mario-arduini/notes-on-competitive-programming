#include <cstdio>

int main(){
	int t,k=0,n,i,j,stop,start;
	long long sum,cur,a;
	scanf("%d",&t);
	while(k++<t){
		scanf(" %d",&n);
		cur=0;
		sum=1;
		start=stop=0;
		for(i=j=1;j<n;j++){
			scanf(" %lld",&a);
			cur+=a;
			if(cur<0) { i=j+1; cur=0; }
			if(cur>sum||(cur==sum&&(j+1-i>stop-start))) { start=i; stop=j+1; sum=cur; }
		}
		if(start>0) printf("The nicest part of route %d is between stops %d and %d\n",k,start,stop);
		else printf("Route %d has no nice parts\n",k);
	}
	return 0;
}
