#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main(){
	string a,b;
	int v1,v2,i;
	getline(cin,a);
	getline(cin,b);
	while(!cin.eof()){
		v1=v2=0;
		for(i=0;i<a.size();i++){
			if(a[i]>='a'&&a[i]<='z') v1 += a[i] - 'a' +1;
			else if(a[i]>='A'&&a[i]<='Z') v1 += a[i] -'A' +1;
		}
		for(i=0;i<b.size();i++){
			if(b[i]>='a'&&b[i]<='z') v2 += b[i] - 'a' +1;
			else if(b[i]>='A'&&b[i]<='Z') v2 += b[i] -'A' +1;
		}
		while(v1>9){
			i=0;
			while(v1){
				i+=v1%10;
				v1/=10;
			}
			v1=i;
		}
		while(v2>9){
			i=0;
			while(v2){
				i+=v2%10;
				v2/=10;
			}
			v2=i;
		}
		printf("%.2f %\n",v1>v2 ? float(v2)*100/v1 : float(v1)*100./v2);
		getline(cin,a);
		getline(cin,b);
	}
	return 0;
}
