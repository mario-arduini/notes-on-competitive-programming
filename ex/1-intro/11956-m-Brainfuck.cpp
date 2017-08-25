#include <cstdio>
int main(){
	int t,i;
	char c,b[100];
	scanf("%d",&t);
	c=getchar();
	for(int k=0;k<t;k++){
		for(i=99;i>=0;i--) b[i]=0;
		i++;
		while((c=getchar())!='\n'){
			if(c=='<') i = (i+99)%100;
			else if(c=='>') i = ++i%100;
			else if(c=='+'){
				b[i] = ++b[i]%256;
			}
			else if(c=='-'){
				b[i] = (b[i]+255)%256;
			}
		}
		printf("Case %d:",k+1);
		for(i=0;i<100;i++) printf(" %02hhX",b[i]);
		printf("\n");
	}
	return 0;	
}
