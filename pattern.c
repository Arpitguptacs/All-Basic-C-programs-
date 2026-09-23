
/*10.	Write a program in C to display a pattern like a diamond.
    *
   *** 
  *****
 *******
********* 
 *******
  *****
   ***
    * 
              */

# include <stdio.h>
int main(){

    int size;
    printf(" Enter the number of row ");
    scanf("%d",&size);
    
     for(int i=1; i<=size; i++){
        for(int j=size-1; j>=i; j--){
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++){
            printf("*");
            
        }
        // for(int j=)
        printf("\n");
     }
     for(int i=1; i<=size-1; i++){
        for(int j=1; j<=i; j++){
            printf(" ");
        }
        for(int j=2*size-3; j>=2*i-1; j--){
            printf("*");
            
        }
    
        printf("\n");
     }

    return 0;
}