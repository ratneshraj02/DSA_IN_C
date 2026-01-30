/* WAP to print the reverse series from 50 to 1 in using do while loop */
#include <stdio.h>
int main(){
    
    int i = 50; 
    do {
        printf("%d \t",i);
        i--;
    } while(i > 0);
    printf("\n");

    return 0;
}