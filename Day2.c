#include <stdio.h>

 int speed(int d, int t){
     return d*t;
 }

int main(void) {
    int c,a,x,b,y,f,g,d,t;
    
    scanf("%d",&c);
    while(c!=0)
    {
        printf("\nEnter the values: ");
        scanf("%d %d ",&a,&x);
        a=d;
        x=t;
        f=speed(a,x);
        printf("\nEnter the values: ");
        scanf("%d %d ",&b,&y);
        b=d;
        y=t;
        g=speed(a,x);
        
        if(f>g)
	    {
	        printf("alice");
	    }
	    else if(f==g)
	    {
	        printf("equal");
	    }
	    else
	    {
	        printf("bob");
	    }
	    
        c--;
    }
	return 0;
}
