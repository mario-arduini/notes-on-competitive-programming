#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main(){
	int feats,cs,maxf,f,i=0,k;
	float minp,p;
	string bestc,c;
	while(scanf(" %d %d",&feats,&cs),feats||cs){
		cin.ignore(65453,'\n');
		if(i) cout << endl;
		for(k=0;k<feats;k++) getline(cin,c);
		maxf=-1;
		for(k=0;k<cs;k++){
			getline(cin,c);
			scanf(" %f %d\n",&p,&f);
			if(f>maxf){
				maxf=f;
				minp=p;
				bestc=c;
			} else if(f==maxf&&p<minp){
				minp=p;
				bestc=c;
			}
			for(int j=0;j<f;j++) getline(cin,c);
		}
		cout << "RFP #" << ++i << endl << bestc << endl;
	}
	return 0;
}
