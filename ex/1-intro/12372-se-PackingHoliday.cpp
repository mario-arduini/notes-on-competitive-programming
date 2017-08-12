#include <cstdio>
int main(){
	int t,i=0,x,y,z;
	scanf("%d",&t);
	while(i++<t){
		scanf(" %d %d %d",&x,&y,&z);
		printf("Case %d: %s\n",i,(x>20||y>20||z>20) ? "bad" : "good");
	}
	return 0;
}

