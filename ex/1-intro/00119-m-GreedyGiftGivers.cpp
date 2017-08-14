#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	string s[10],n;
	int p,i,money,howmany,net[10],printflag=0;
	while(scanf(" %d\n",&p)!=EOF){
		if(printflag) printf("\n");
		for(i=0;i<p;i++) {
			cin >> s[i];
			net[i]=0;
		}
		for(i=0;i<p;i++){
			cin >> n;
			//printf(" * %d of %d * ",i+1,p);
			//cout << n << endl;
			scanf(" %d %d",&money,&howmany);
			if(howmany){
				for(int k = 0;k<p;k++)
					if(s[k]==n)
						net[k] = net[k] - money + money%howmany;
				money/=howmany;
				while(howmany-->0){
					cin >> n;
					for(int k = 0;k<p;k++)
						if(s[k]==n)
							net[k] = net[k] + money;
				}
			}
		}
		for(i=0;i<p;i++)
			cout << s[i] << " " << net[i] << endl;
		printflag=1;
	}
	return 0;
}
