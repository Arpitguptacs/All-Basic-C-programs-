/*Write a program in C to separate odd and even integers into separate arrays.*/

#include <stdio.h>
int main (){
    
    printf("Enter the number of elements to be store in  arrya : ");
    int size ;
    scanf("%d",&size);
    
    int arr[size];

    printf("\nEnter %d elements in the arrya\n",size);
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int odd[size/2+1];
    int even[size/2+1];

    int a=0;
    int b=0;
    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            even[a] = arr[i];
            a++;
        }else{
            odd[b] = arr[i];
            b++;
        }
    }
     printf("\nOdd elements are \n");
     for(int i=0; i<size/2+1; i++){
        printf("%d ",odd[i]);
     }
     printf("\nEven elements are \n");
     for(int i=0; i<size/2+1; i++){
        printf("%d ",even[i]);
     }
     
    return 0;
}