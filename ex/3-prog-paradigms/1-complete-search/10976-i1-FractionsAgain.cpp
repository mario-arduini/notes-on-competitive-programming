#include <cstdio>
int main(){
	int k,kk,a,b,sols;
	while(scanf(" %d",&k)!=EOF){
		kk=2*k;
		sols=0;
		for(b=k+1;b<=kk;b++)
			if((b*k)%(b-k)==0) sols++;
		printf("%d\n",sols);
		for(b=k+1;sols>0;b++) if((b*k)%(b-k)==0){
			sols--;
			printf("1/%d = 1/%d + 1/%d\n",k,b*k/(b-k),b);
		}
	}
	return 0;
}
