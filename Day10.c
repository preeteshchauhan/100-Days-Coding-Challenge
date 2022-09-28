#include <stdio.h>

int main(void) {
	int t,x;
	scanf("%d",&t);
	while(t!=0){
	    scanf("%d",&x);  
	    if(x>=7)
	    printf("\nNO");
	    else
	    printf("\nYES");
	    t--;
	}
	return 0;
}

