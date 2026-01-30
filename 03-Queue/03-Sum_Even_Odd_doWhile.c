/* WAP in c to print the su of even or odd number from 1 to 50 using do while loop */

#include <stdio.h>
int main(){ 
    int i = 1, even_sum = 0, odd_sum = 0;
    
    do {
        if(i % 2 != 0){
            even_sum += i;
        } else {
            odd_sum += i;
        }
        i++;
    } while(i <= 50);
    printf("sum of even :%d\n",even_sum);
    printf("nsum of even :%d\n",odd_sum);

    printf("sum of odd and even: %d\n",even_sum + odd_sum);


    return 0;
}