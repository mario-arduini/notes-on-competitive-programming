#include <cstdio>
int main(){
	int n,m,c,max,cur,dev[20],on[20],i=0,k,d,flag;
	while(scanf(" %d %d %d",&n,&m,&c),n||m||c){
		k=0;
		while(k<n) {
			scanf(" %d",dev+k);
			on[k++]=0;	
		}
		flag=0;
		max=-1;
		cur=0;
		k=0;
		while(k++<m){
			scanf(" %d",&d);
			if(on[d-1]){
				on[d-1]=0;
				cur -= dev[d-1];
			} else {
				on[d-1]++;
				cur += dev[d-1];
			}
			if(cur>max){
				max=cur;
				if(max>c) flag=1;		
			}
		}
		printf("Sequence %d\n",++i);
		if(flag){
			printf("Fuse was blown.\n\n");
		} else {
			printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n\n",max);
		}
	}
	return 0;
}
