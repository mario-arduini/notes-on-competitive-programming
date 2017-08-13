#include <cstdio>
int main(){
	int c1,c2,min1,min2;
	scanf(" %d %d",&c1,&c2);
	while(c1!=-1||c2!=-1){
		min1=(c1+100-c2)%100;
		min2=(c2+100-c1)%100;
		printf("%d\n",min1<min2?min1:min2);
		scanf(" %d %d",&c1,&c2);
	}
	return 0;
}
