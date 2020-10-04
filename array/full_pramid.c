
/*
#include<stdio.h>
void main(){
    int num,i,k=0,space;
    printf("Enter the Number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++,k=0){
        for(space=1;space <= num-i;space++){
            printf(" ");
        }
        while(k!=2*i-1){
            printf("*");
            k++;
        }
     printf("\n");
    }
}
*/


#include<stdio.h>
void main(){
    int num,i,k=0,space;
    printf("Enter the Number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++,k=0){
        for(space=1;space <= num-i;space++){
            printf(" ");
        }
        while(k!=2*i-1){
            printf("*");
            k++;
        }
     printf("\n");
    }
}