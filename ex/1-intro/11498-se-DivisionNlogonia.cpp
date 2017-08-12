#include <cstdio>
int main(){
	int t,px,py,qx,qy;
	while(scanf(" %d\n",&t),t){
		scanf("%d %d",&px,&py);
		while(t--){
			scanf(" %d %d",&qx,&qy);
			if(qx==px||qy==py) printf("divisa\n");
			else printf("%c%c\n",qy>py ? 'N' : 'S',qx>px ? 'E' : 'O');
		}
	}
	return 0;
}
