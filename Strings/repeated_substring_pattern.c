/*

This program for to check the given strings are
repeated substring pattern 

examble for:
    input: abcabc
    output: true

    input: qwertyu
    output:false

*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    char string[50];
    int len, i, j, k=0;
    printf("Enter the string: \n");
    gets(string);

    len=strlen(string);
    
    for(i=0;i<len;i++){
        for(j=i;j<len;j++){
            if(string[i]==string[j+1]){
                k=k+1;
            }
        }
    }
    if(k!=0){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    
}