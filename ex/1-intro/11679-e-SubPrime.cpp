#include <cstdio>
int main(){
	int b,deb,res[20],d,c,am,i;
	char r;
	scanf("%d %d",&b,&deb);
	while(b||deb){
		i=0;
		while(i<b) scanf(" %d",&res[i++]);
		while(deb--){
			scanf(" %d %d %d",&d,&c,&am);
			res[d-1]-=am;
			res[c-1]+=am;
		}
		r='S';
		i=0;
		while(i<b&&r=='S') if(res[i++]<0) r='N';
		printf("%c\n",r);
		scanf("%d %d",&b,&deb);
	}
}
