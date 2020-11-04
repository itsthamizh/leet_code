/*

This program for roman letters into integer letters 
converting

Example for:
        input: XII
        output: 12
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int i,len;
    int a[50];
    char string[100];
    printf("Enter the roman form letters: \n");
    scanf("%s",string);

    len=strlen(string);

    for(i=0;i<len;i++){
        if(string[i]=='I'){
            a[i]=1;
        }
        else if(string[i]=='V'){
            a[i]=5;
        }
        else if(string[i]=='X'){
            a[i]=10;
        }
        else if(string[i]=='L'){
            a[i]=50;
        }
        else if(string[i]=='C'){
            a[i]=100;
        }
        else if(string[i]=='D'){
            a[i]=500;
        }
        else if(string[i]=='M'){
            a[i]=1000;
        }

    }
    int k;
    k=a[len-1];
    
    for(i=len-1;i>0;i--){
        if(a[i]>a[i-1]){
            k=k-a[i-1];
        }
        else if(a[i]==a[i-1] || a[i]<a[i-1]){
            k=k+a[i-1];
        }
    }

    printf("The integer values are: \n");
    printf("%d\n",k);


}