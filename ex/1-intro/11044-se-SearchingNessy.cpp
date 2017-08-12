#include <cstdio>
int main(){
	int t,r,c;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&r,&c);
		if(r%3==2) r -=2;
		if(c%3==2) c -=2;;
		printf("%d\n",(r/3)*(c/3));
	}
	return 0;
}
