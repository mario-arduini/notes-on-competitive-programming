#include <cstdio>
#include <cstring>
int main(){
	char s[15];
	int i=1;
	scanf("%s",s);
	while(s[0]!='#'){
		printf("Case %d: ",i++);
		if(!strcmp(s,"BONJOUR")) printf("FRENCH\n");
		else if(!strcmp(s,"ZDRAVSTVUJTE")) printf("RUSSIAN\n");
		else if(!strcmp(s,"CIAO")) printf("ITALIAN\n");
		else if(!strcmp(s,"HELLO")) printf("ENGLISH\n");
		else if(!strcmp(s,"HOLA")) printf("SPANISH\n");
		else if(!strcmp(s,"HALLO")) printf("GERMAN\n");
		else printf("UNKNOWN\n");
		scanf("%s",s);
	}
	return 0;
}
