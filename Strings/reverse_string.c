/*

This program for to print the given strings are 
reverse orderly

Example for:
    input: hello
    output: olleh

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    char string[100];
    printf("Enter the string:\n");
    gets(string);

    reverse(string);
}

int reverse(char string[]){
    int i, j, len, temp;
    len=strlen(string);
    j=len-1;

    for(i=0;i<len;i++){
        if(i<j){
            temp=string[i];
            string[i]=string[j];
            string[j]=temp;

            j--;
        }
        
    }
    printf("%s",string);
}