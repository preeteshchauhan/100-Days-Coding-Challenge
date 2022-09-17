#include <stdio.h>

int main(void) {
	int w,x,y,z,m,t;
    scanf("%d",&t);
    while(t!=0){
        scanf("%d %d %d %d",&w,&x,&y,&m);
        z= w+(x-y)*m;
        printf("\n%d",z);
        t--;
        
    }
    return 0;
}    