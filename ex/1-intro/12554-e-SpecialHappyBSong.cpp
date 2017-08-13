#include <cstdio>
#include <cstring>
int main(){
	int n,i=0,p;
	char nomi[100][101], h[16][20];
	strcpy(h[0],"Happy");
	strcpy(h[1],"birthday");
	strcpy(h[2],"to");
	strcpy(h[3],"you");
	strcpy(h[4],"Happy");
	strcpy(h[5],"birthday");
	strcpy(h[6],"to");
	strcpy(h[7],"you");
	strcpy(h[8],"Happy");
	strcpy(h[9],"birthday");
	strcpy(h[10],"to");
	strcpy(h[11],"Rujia");
	strcpy(h[12],"Happy");
	strcpy(h[13],"birthday");
	strcpy(h[14],"to");
	strcpy(h[15],"you");
	scanf(" %d\n",&n);
	while(i<n)
		gets(nomi[i++]);
	p=n/16;
	if(n%16) p++;
	p*=16;
	for(i=0;i<p;i++)
		printf("%s: %s\n",nomi[i%n],h[i%16]);
	return 0;
}
