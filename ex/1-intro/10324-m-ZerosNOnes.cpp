#include <cstdio>
using namespace std;
int main(){
	char s[1000001];
	int n,i=0,a,b,c,k,flag;
	while(gets(s)&&s[0]!='\0'){
		scanf(" %d",&n);
		printf("Case %d:\n",++i);
		while(n--){
			scanf(" %d %d",&a,&b);
			if(a>=b) c=a;
			else {
				c=b;
				b=a;
			}
			for(flag=0,k=b;!flag&&k<c;k++) if(s[k]!=s[k+1]) flag=1;
			printf("%s\n",flag ? "No":"Yes");
		}
		gets(s);
	}
	return 0;
}
