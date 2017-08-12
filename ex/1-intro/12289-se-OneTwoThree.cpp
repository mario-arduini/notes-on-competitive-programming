#include <cstdio>
int main(){
	char s[10];
	int n,i;
	scanf("%d\n",&n);
	while(n--){
		scanf("%s",s);
		if(s[3]!='\0') printf("3\n");
		else {
			i=0;
			if(s[0]=='o') i++;
			if(s[1]=='n') i++;
			if(s[2]=='e') i++;
			if(i>1) printf("1\n");
			else printf("2\n");
		}
	}
	return 0;
}
