#include <stdio.h>
int main() {
    /*
    WAP that prompt the user to input a series of integer until the user entering 0  using a do while loop.calculate 
    and print the sum of all postive integer entered.
    */
    int num = 0, sum = 0;
    printf("Enter a series of integers (enter 0 to stop):\n");
    do {
        printf("Enter the number :");
        scanf("%d",&num);
        if(num > 0){
            sum += num;
        } 
    }while(num);
    printf("sum of all positive number is %d\n",sum);

  
    return 0;
}
