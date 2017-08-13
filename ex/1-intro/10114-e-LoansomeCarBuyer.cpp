#include <cstdio>  // WA VERDICT
int main(){
	float debt,value,d1,d2,rate;
	int r,loanmonth,t,cur,m1,m2;
	scanf("%d %f %f %d",&loanmonth,&value,&debt,&t);
	while(loanmonth>=0){
		value = value + debt;
		rate = debt/loanmonth;
		scanf(" %d %f",&m1,&d1);
		if(--t>0) scanf(" %d %f",&m2,&d2);
		else m2=-1;
		value -= value*d1;
		cur=0;
		while(value<debt){
			cur++;
			if(cur==m2){
				m1=m2;
				d1=d2;
				if(--t>0) scanf(" %d %f",&m2,&d2);
				else m2=-1;
			}
			value -= value*d1;
			debt -= rate;
		}
		if(cur==0) cur=1;
		printf("%d mont%s\n",cur,cur>1 ? "hs" : "h");
		scanf(" %d %f %f %d",&loanmonth,&value,&debt,&t);
	}
	return 0;
}
