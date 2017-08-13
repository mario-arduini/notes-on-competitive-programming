#include <cstdio>
int main(){
	int a,b;
	scanf("%d",&a);
	while(a){
		b=a;
		while(b>9){
			b=0;
			while(a){
				b+=a%10;
				a/=10;	
			}
			a=b;
		}
		printf("%d\n",b);
		scanf("%d",&a);
	}
}
