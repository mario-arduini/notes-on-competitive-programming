#include <cstdio>
#include <algorithm>
int main(){
	int h,d,t;
	float u,cur,f;
	while(scanf(" %d %f %d %f",&h,&u,&d,&f),h){
		f=u*f/100;
		cur = u;
		t=0;
		while(1){
			t++;
			//printf("after climbing %f\n",cur);
			if(cur>h){
				printf("success on day %d\n",t);
				break;
			}
			cur-=d;
			//printf("after sliding %f\n\n",cur);
			if(cur<0){
				printf("failure on day %d\n",t);
				break;
			}
			u = std::max(u-f,0.f);
			cur+=u;
		}
	}
	return 0;
}
