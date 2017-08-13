#include <cstdio>
int main(){
	int pers,budget,hotel,week,cost,beds,lowest=500001,ok,i;
	while(scanf(" %d %d %d %d",&pers,&budget,&hotel,&week)==4){
		lowest=500001;
		while(hotel--){
			scanf(" %d",&cost);
			ok=0;
			i=0;
			while(i++<week){
				scanf(" %d",&beds);
				if(beds>=pers) ok=1;
			}
			if(ok&&cost<lowest) lowest=cost;
		}	
		if(lowest*pers<budget) printf("%d\n",lowest*pers);
		else printf("stay home\n");		
	}
	return 0;
}
