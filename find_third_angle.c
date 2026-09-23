/*5.	C program to find the third angle of a triangle if two angles are given*/
#include <stdio.h>

int main(){

    float angle_1;
    printf("Enter first angle : ");
    scanf("%f",&angle_1);

    float angle_2;
    printf("Enter second angle : ");
    scanf("%f",&angle_2);

    float angle_3 = 180 - angle_1 -angle_2;

    if(angle_1  + angle_2 + angle_3 == 180){
        printf("Third angle is %.2f",angle_3);
    }else{
        printf("Given angles are nat corect");
    }

    return 0;
}
