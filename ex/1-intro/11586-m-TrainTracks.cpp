#include <cstdio>
int main(){
	char c,p;
	int m,f,f1,t;
	scanf("%d\n",&t);
	while(t--){
		m=f=f1=0;
		p=getchar();
		p == 'M' ? m++ : f++;
		while((c=getchar())!='\n'){
			if(c==' ') f1=1;
			else if(c=='M') m++;
			else f++;
		}
		if(f==m&&f1) printf("LOOP\n");
		else printf("NO LOOP\n");
	}
	return 0;
}
