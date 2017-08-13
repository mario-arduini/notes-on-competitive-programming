#include <cstdio>
#include <cstdlib>
#include <cstring>
int main(){
	int t,n,k[100],i,p;
	char s[30],*c;
	scanf(" %d\n",&t);
	while(t--){
		p=0;
		scanf(" %d\n",&n);
		for(i=0;i<n;i++){
			gets(s);
			if(s[0]=='L'){
				k[i]=-1;
				p--;
			}
			else if(s[0]=='R'){
				k[i]=1;
				p++;
			}
			else {
				c=strpbrk(s,"0123456789");
				k[i]=k[atoi(c)-1];
				p+=k[atoi(c)-1];
			}
		}
		printf("%d\n",p);
	}
	return 0;
}
