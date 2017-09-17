#include <cstdio>
int main(){
    int t,a[2000],n,i,j,r;
    scanf("%d",&t);
    while(t--){
        r=0;
        scanf(" %d",&n);
        for(i=0;i<n;i++) scanf(" %d",a+i);
        for(i=1;i<n;i++) for(j=0;j<i;j++) if(a[j]<=a[i]) r++;
        printf("%d\n",r);
    }
    return 0;
}
