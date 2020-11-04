/*

This program for to compree the given strings

Example for :
        input: aabbcc
        output: a2b2c3

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main(){
    char str[100];
    printf("Enter the string:\n");
    gets(str);

    int len = strlen(str); 
    for (int i = 0; i < len; i++) { 
  
        int count = 1; 
        
        while (i < len - 1 && str[i] == str[i + 1]) { 
            count++; 
            i++; 
        }
        
        if (count == 1){
            printf("%c",str[i]);
        }
        
        else{
            printf("%c%d",str[i],count);
        }
         
    }
}