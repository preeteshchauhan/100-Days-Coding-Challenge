#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a[100], ch;
    int i, c0=0, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0;
    gets(a);
    for (i=0; a[i]!='\0'; i++) {
        ch = a[i];
        switch (ch) {
        case '0': c0++;
                  break;
        case '1': c1++;
                 break;
        case '2': c2++; 
                  break;
        case '3': c3++;
                   break;
        case '4': c4++; 
                  break;
        case '5': c5++; 
                  break;
        case '6': c6++;
                  break;
        case '7': c7++;
                  break;
        case '8': c8++; 
                  break;
        case '9': c9++; 
                  break;   
        
        }
    }    
        
        printf("%d %d %d %d %d %d %d %d %d %d", c0, c1, c2, c3, c4, c5, c6, c7, c8, c9); 
    return 0;
}