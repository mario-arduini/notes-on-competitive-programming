#include <iostream>
#include <algorithm>
int main(){
	int f,b,fa[11],ba[11],i,j,fb;
	float maxspread,d[101];
	while(scanf("%d",&f),f){
		scanf(" %d",&b);
		for(i=0;i<f;i++) scanf(" %d",fa+i);
		for(i=0;i<b;i++) { scanf(" %d",ba+i);
			for(j=0;j<f;j++) d[i*f+j]=(float)ba[i]/fa[j];
		}
		fb = b*f;
		std::sort(d,d+fb);
		maxspread=d[1]/d[0];
		for(i=2;i<fb;i++) maxspread=std::max(maxspread,d[i]/d[i-1]);
		printf("%.2f\n",maxspread);
	}
	return 0;
}
