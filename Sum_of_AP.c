 
/*9.	Write a C program to find the sum of an A.P. series.*/
#include <stdio.h>

int main(){

    int str_e;
    printf("Enter the first Element :");
    scanf("%d",&str_e);

    int term;
    printf("Enter the terms of serice : ");
    scanf("%d",&term);

    

    int diff ;
    printf("Enter the common diffrence : ");
    scanf("%d",&diff);

    int sum =0;
    for(int i=1; i<=term; i++){
        
        sum =  str_e + (i-1)*diff;
         printf("%d  ",sum);
    }
    int Sn = (term/2)*(2*str_e + (term-1)*diff);
    printf( "\nsum is  = %d",Sn);

    return 0;
}