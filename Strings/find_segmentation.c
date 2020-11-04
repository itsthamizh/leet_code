/*

This program for given strings segmentation parts

Exampe for,
    input: Hello, my name is John
    output: 5

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    char string[100];
    printf("Enter the string :\n");
    gets(string);

    find_segment(string);
}

void find_segment(char string[]){
    int len, i=0, k;
    len=strlen(string);
    if(string[i]==NULL){
        return 0;
    }
    k=0;
    for(i=0;i<len;i++){
        if(string[i]==' '){
            k=k+1;
        }
    }
    printf("%d ",k+1);
}