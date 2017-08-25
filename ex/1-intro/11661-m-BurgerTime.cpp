#include <cstdio>
int main(){
	int cur,min,l,flag;
	char c;
	while(scanf(" %d",&l),l){
		c=getchar();
		cur=flag=0;
		min=2000000;
		c=getchar();
		for(int i=0;i<l;i++){
			if(flag!=3){
				if(c=='Z'){
					flag=3;
					min=0;
				}
				else if(c=='R'){
					if(flag==2&&cur<min) min=cur;
					cur=1;
					flag=1;
				}
				else if(c=='D'){
					if(flag==1&&cur<min) min=cur;
					cur=1;
					flag=2;
				}
				else cur++;
			}
			c=getchar();
		}
		printf("%d\n",min);
	}
	return 0;
}
