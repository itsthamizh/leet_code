/*
    This program for to print the elements of the 
    values in half pramid
*/

#include<stdio.h>

void main(){
    int num;
    printf("Enter the number value:");
    scanf("%d",&num);
    int i,j;
    for(i=0;i<=num;i++){
        for(j=0;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}





//This program for half pramid to print the "*"

#include<stdio.h>

void main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int i,j;
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}



// This program for half pramid of reverse orer
// to print the "*" 

#include<stdio.h>

void main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int i,j;
    for(i=num;i>=0;i--){
        for(j=i;j>=0;j--){
            printf("*");
        }
        printf("\n");
    }
}
