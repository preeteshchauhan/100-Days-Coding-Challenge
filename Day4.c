#include <stdio.h>

int main(void) {
	int k,x,r,t;
	scanf("%d",&t);
	while(t!=0){
	    scanf("%d %d",&k,&x);
	    r= (k*7)-x;
	    printf("\n%d",r);
	    t--;
	}
	return 0;
}

