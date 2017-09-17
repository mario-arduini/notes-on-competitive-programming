#include <cstdio>
#include <cstdlib>
#include <algorithm>

int main(){
	int n,i,j,k,a[1001],m,b,sum,best,t=0;
	while(scanf(" %d",&n),n){
		printf("Case %d:\n",++t);
		for(i=0;i<n;i++)
			scanf(" %d",a+i);
		scanf(" %d",&m);
		std::sort(a,a+n);
		for(i=0;i<m;i++){
			j=0; k=n-1;
			best=a[0]+a[k];
			scanf(" %d",&b);
			while(j!=k){
				sum = a[j]+a[k];
				if(abs(sum-b)<abs(best-b)) best=sum;
				if(best==b) break;
				sum > b ? k-- : j++ ;
			}
			printf("Closest sum to %d is %d.\n",b,best);
		}
			
	}
	return 0;
}
