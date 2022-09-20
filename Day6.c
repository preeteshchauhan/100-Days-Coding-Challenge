#include <stdio.h>

int main(void) {
        int a,b,t;
        scanf("%d",&t);
        while(t!=0){
            scanf("%d %d",&a,&b);
            if((a+b)%2==0)
            printf("\nYES");
            else
            printf("\nNO");
            t--;
        }
        
	return 0;
}