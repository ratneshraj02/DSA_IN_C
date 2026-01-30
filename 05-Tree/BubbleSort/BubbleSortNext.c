#include <stdio.h>
int main(){
    int n, i, j, temp; 
    int a[10] = {42, 35, 47, 28, 39, 44, 31, 50, 26, 33};
    
    printf("Enter the number of elements :");
    scanf("%d", &n);

    printf("Enter the number : %d \n", n);

    for( i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++){
        for(j = 0;  j < n-1-i; j++){
            if(a[i] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;  
            }
            
        }
    }

    //printing
    printf("Sorted array in ascending order :\n");
    for(i = 0; i < n; i++){
        printf("%d \n",a[i]);
    }
    return 0;
}

