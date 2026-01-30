/*
    WAP in C to explain the use of for loop, while loop, do while loop, switch case, break and continue statment.
*/
#include <stdio.h>
int main(){

    /* For loop */
    /*
    For loop is used for do repetive task means when we one task again-again then we use for loop.

    syntax : 
            for(initilization; condition; increment/decrement){
                //code
            }
    for example :- Print to 1 to 10.
    */
   for(int i = 1; i <= 10; i++){
    printf("%d \t",i);
   }

   /* While loop */
   /* It also used for to do repetative task

   syntex :
            initilization
            while(condition){
            
                //code
            increment/decrement
            }

        for example :- Print to 1 to 10.
    */
   int w = 1;
   while (w <= 10)
   {
    printf("%d \t",w);
    w++;
   }
   


    


    return 0;
}
