#include <cstdio>
#include <cstdlib>
#include <cstring>
//#include <ctime>

int r[8],t,a,b,bitr,bitdl,bitdr,sols;
//clock_t now;

void btrack(int col){
	int i;
	if(col>b&&r[b]!=a) return;
	if(col==8&&r[b]==a){
		printf("%2d      %d",++sols,r[0]+1);
		for(i=1;i<8;i++) printf(" %d",r[i]+1);
		printf("\n");
		return;
	}
	for(i=0;i<8;i++){
		//printf("trying col %d row %d\n",col,i);
		if(!(bitr&1<<i)&&!(bitdl&1<<(i+col))&&!(bitdr&1<<(i-col+7))){
			bitr |= 1<<i; bitdl |= 1<<(i+col); bitdr |= 1<<(i-col+7);
			r[col]=i;
			//printf("Assigned col: %d row: %d * bitr %d bitdl %d bitdr %d\n",col,r[col],bitr,bitdl,bitdr);
			btrack(col+1);
			bitr ^= 1<<i; bitdl ^= 1<<(i+col); bitdr ^= 1<<(i-col+7);
		}
	}
}

int main(){
	scanf(" %d",&t);
	while(t--){
		scanf(" %d %d",&a,&b);
		printf("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n");
		//now=clock();
		a--; b--;
		memset(r,0,sizeof r);
		sols=bitr=bitdl=bitdr=0;
		btrack(0);
		if(t) printf("\n");
		//now=clock()-now;
		//printf("Exec time: %.4f sec\n",((float)now)/CLOCKS_PER_SEC);
	}
}
