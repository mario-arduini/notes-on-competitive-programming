#include <cstdio>
int main(){
	int i=1;
	char s[20];
	scanf("%s",s);
	while(s[0]!='*'){
		if(s[0]=='H') printf("Case %d: Hajj-e-Akbar\n",i++);
		else printf("Case %d: Hajj-e-Asghar\n",i++);
		scanf("%s",s);
	}
	return 0;
}
