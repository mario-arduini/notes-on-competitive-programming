#include <cstdio>
int main(){
	int t,mon=0,don;
	char cmd[10];
	scanf("%d\n",&t);
	while(t--){
		scanf(" %6s",&cmd);
		if(cmd[0]=='r') printf("%d\n",mon);
		else {
			scanf(" %d\n",&don);
			mon += don;
		}
	}
	return 0;
}
