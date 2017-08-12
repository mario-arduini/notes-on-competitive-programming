#include <cstdio>
int main(){
	int a,b,t;
	char c;
	scanf("%d\n",&t);
	while(t--){
		scanf("%d %d\n",&a,&b);
		if(a>b) c='>';
		else c= a==b ? '=' : '<';
		printf("%c\n",c); 
	}
	return 0;
}
