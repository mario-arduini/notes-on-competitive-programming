#include <cstdio>
int main(){
	int cur,pre,i,cop;
	char c,prec;
	cur=0;
	while((c=getchar())!='E'){
		if(c=='\n'){
			pre= prec=='1' ? 1 : -1;
			i=1;
			while(cur!=pre){
				pre=cur;
				i++;
				cur=1;
				cop=pre;
				while(cop/=10) cur++;
			}
			cur=0;
			printf("%d\n",i);
		} else cur++;
		prec=c;
	}
	return 0;
}
