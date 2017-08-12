#include <cstdio>
int main(){
	int a,b,c,d,deg,tot;
	scanf("%d %d %d %d \n",&a,&b,&c,&d);
	while(a||b||c||d){
		deg=1080;
		tot = (a+40-b)%40;
		tot += (c+40-b)%40;
		tot += (c+40-d)%40;
		deg+= tot*360/40;
		printf("%d\n",deg);
		scanf("%d %d %d %d \n",&a,&b,&c,&d);
	}
	return 0;
}
