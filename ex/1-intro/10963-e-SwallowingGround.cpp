
#include <iostream> // AC

int main(int argc, const char * argv[]) {
    int n;
    std::string a;
    for (scanf(" %d",&n); n>0; n--) {
        getline(std::cin, a);
        int nn,a,b,diff,temp,flag=1;
        scanf(" %d",&nn);
        scanf(" %d %d",&a,&b);
        diff=a-b;
        for (int i=0; i<nn-1; i++) {
            scanf(" %d %d",&a,&b);
            temp=diff;
            diff=a-b;
            if(diff!=temp) flag=0;
        }
        if (n!=1){
            if(flag) printf("yes\n\n");
            else printf("no\n\n");
        }
        else if(n==1){
            if(flag) printf("yes\n");
            else printf("no\n");
        }
        
    }
}
