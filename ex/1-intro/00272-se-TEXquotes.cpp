#include <cstdio>

int main(){
	char c;
	int r = 0;
	while((c = getchar())!=EOF){
		if(c=='"'){
			printf("%s",r==0 ? "``" : "''");
			r == 0 ? r=1 : r=0;
		} else printf("%c",c);
	}
	return 0;
}
