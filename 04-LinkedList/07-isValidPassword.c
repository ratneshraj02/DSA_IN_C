#include <stdio.h>
#include <stdbool.h>
int main(){

    /*
     WAP that prompt the user to enter the password use do while loop to keep asing for the password entered the
     correct one is entered.
    */
        int password = 12345;
        int Epassword = 0;
        bool condition = false;
        do {
            printf("Enter the password ");
            scanf("%d",&Epassword);

            if(password == Epassword){
                printf("password is correct\n");
                condition = true;
            }
        }while(!condition);
    return 0;
}
