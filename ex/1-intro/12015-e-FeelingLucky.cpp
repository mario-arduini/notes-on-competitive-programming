#include <cstdio>
#include <cstdlib>
#include <cstring>
int main(){
	char s[10][104], *p;
	int r[10],max,t,i=0,n;
	scanf(" %d\n",&t);
	while(i++<t){
		n=0;
		while(n<10){
			gets(s[n]);
			p=strpbrk(s[n]," ");
			r[n]=atoi(p+1);
			*p='\0';
			n++;
		}
		max=0;
		for(n=0;n<10;n++) if(r[n]>max) max=r[n];
		printf("Case #%d:\n",i);
		for(n=0;n<10;n++) if(r[n]==max) printf("%s\n",s[n]);
	}
	return 0;
}
