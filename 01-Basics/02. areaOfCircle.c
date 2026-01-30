/* WAP in C to calculate area of circle. */

#include <stdio.h>
    int main(){
        float radius, area;

        printf("Enter the radius of circle :");
        scanf("%f", &radius);

        area = 3.1415 * radius * radius;
        printf("Area of cirle : %f",area);
        return 0;
    } 