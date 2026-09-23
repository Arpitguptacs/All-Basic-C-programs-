/*4.	Write a program in C to calculate and print 
the electricity bill of a given customer. The customer ID, 
name, and unit consumed by the user should be captured from 
the keyboard to display the total amount to be paid to the customer.*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){

    char ID[500] ;
    printf("Enter the custmer id : ");
    scanf("%s",ID);

    char name[100];
    printf("Enetr the custmer Name : ");
    scanf("%s",name);

    float unit;
    printf("Enter consumed Unit : ");
    scanf(" %f",&unit);
   
    float total= -1;
    float char_per_unit = -1;
   if(unit<200){
       total = unit*1.20;
       char_per_unit = 1.20;
   }else if (unit>=200 && unit<400){
    total = unit*1.50;
    char_per_unit = 1.50;
   }else if(unit>=400 && unit<600){
    total = unit*1.80;
    char_per_unit = 1.80;
   }else if(unit>=600){
    total = unit*2.0;
    char_per_unit = 2.0;
   }
    
   bool flag = false;
   float total_2 = 0;
   if(total>400){
     total_2 = (total*15)/100;
   }else if (total<=100){
      flag = true;
   }
   
   printf("\n_______Electricity Bill________\n");

   printf(" Custmer User Id : %s\n",ID);
   printf(" Custmer Name : %s\n",name);
   printf("Unit Consumed  : %.2f\n",unit);
   printf("Amount charge @Rs.%.2f per unit  : %.2f \n", char_per_unit,total);
   printf("Surcharge Amount : %.2f\n", total_2);
   if(total+total_2>100){
   printf("Net Amount Paid By the Customer : %.2f",total+total_2);
   }else{
    printf("Net billis less then 100 " );
   }
    return 0;
}
