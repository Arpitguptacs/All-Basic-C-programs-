/*1.	Write a C program to display the n terms of odd natural numbers and their sum.*/
#include <stdio.h>
int main(){

  int terms ;
  printf("Enter the number of terms : ");
  scanf("%d",&terms);

   int num = 1;
   int sum ;

   printf("The odd numbers are :-");

   for(int i=1; i<=terms; i++){
    printf("%d ",num);
   
     sum = sum + num;
     num += 2;
   }

   printf("\nThe sum of odd numbers is %d",sum);
  
  return 0;

}

