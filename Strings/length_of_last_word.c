/*

This program for to find out the length of
the last character between the ' '(space character) 
in the given strings

Example for:
    input : Hello World
    output: 5  (this for last string)

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int k;
    char string[100];
    printf("Enter the input of strings\n");
    gets(string);

    k=lastword_lenth(string);

    printf("%d",k);
}

int lastword_lenth(char string[]){
    int i, len,k=0;
    len=strlen(string);

    for(i=len-1;i>0;i--){
        if(string[i] != ' '){
            k++;
        }
        else{
            break;
        }
    }
    return k;
}