#include <stdio.h>

int main(void) {
	// your code goes here
	int i,j,n,c;
	    c=0;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            if((i+j)==n)
	            {
                  c++;
                }
	            
	        }
	    }
	    
	    printf("%d\n",c);
	    
	    
	
	return 0;
}