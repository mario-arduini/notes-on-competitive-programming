#include <cstdio>
int main(){
	int t,a,b,c,i=0;
	scanf("%d",&t);
	while(i++<t){
		scanf(" %d %d %d",&a,&b,&c);
		printf("Case %d: ",i);
		if(a>b){
			if(c>a) printf("%d\n",a);
			else if(c<b) printf("%d\n",b);
			else printf("%d\n",c);
		} else {
			if(c>b) printf("%d\n",b);
			else if(c<a) printf("%d\n",a);
			else printf("%d\n",c);	
		}
	}
	return 0;
}
