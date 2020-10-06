/*

This program for to find the uncrossed index position
of the given arrays

Example for:
    input: a[1,4,2]
           b[1,2,4]
    output: 2

Another example for,
    input: a[2,5,1,2,5] 
           b[10,5,2,1,5,2]
    output: 3
    
*/

#include<stdio.h>

void main(){
    int A[5]={1,4,2};
    int B[6]={1,2,4};
    int num;
    num=uncrossed_lines(A,B);
    printf("%d",num);
}

int uncrossed_lines(int A[], int B[]){
    int i=0,j=0;
    while(i<5){
        while(A[i]==B[j]){
            if(A[i]==B[j]){
                i++,j=i;
                if(A[i]!=B[j]){
                    return i+1;
                }
            }
        }
        i++;
        j++;
    }
}