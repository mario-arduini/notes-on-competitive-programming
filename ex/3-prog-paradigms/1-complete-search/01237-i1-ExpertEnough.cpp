#include <cstdio>
int main(){
	int t,d,min[10001],max[10001],q,val,flag,i,idx;
	char s[10001][21];
	scanf(" %d",&t);
	while(t--){
		scanf(" %d",&d);
		for(i=0;i<d;i++) scanf(" %s %d %d",s+i,min+i,max+i);
		scanf(" %d",&q);
		while(q--){
			scanf(" %d",&val);
			flag=0;
			for(i=0;i<d&&flag!=2;i++)
			 if(val<=max[i]&&val>=min[i]){
			 	flag++;
			 	idx=i;
			 }
			if(flag==1) printf("%s\n",s[idx]);
			else printf("UNDETERMINED\n");
		}
		if(t) printf("\n");
	}
	return 0;
}
