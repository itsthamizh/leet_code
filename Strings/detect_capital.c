/*
break;
This program for to detect the capital

Exampe for:
    input: USA
    output: true

    input: FlaG
    output: false 

*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    char string[50];
    int i=0, j=0, len;
    printf("Enter the string:\n");
    gets(string);

    len=strlen(string);
    
    if(string[i]>='A' && string[i]<='Z'){
        if(string[i+1]>='A' && string[i+1]<='Z'){
            for(i=0;i<len;i++){
                if(string[i]>='A' && string[i]<='Z'){
                    //printf("\nTrue\n");
                }
                else{
                    //printf("\nFalse\n");
                    j++;
                }
            }
        }
        else{
            for(i=i+1;i<len;i++){
                if(string[i+1]>='a' && string[i+1]<='z'){
                    //printf("\nTrue\n");
                }
                else{
                    //printf("\nFalse\n");
                    j++;
                }
            }
        }
    }
    else if(string[i]>='a' && string[i]<='z'){
        for(i=0;i<len;i++){
            if(string[i]>='a' && string[i]<='z'){
                //printf("\nTrue\n");
            }
            else{
                //printf("\nFalse\n");
                j++;
            }
        }
    }
    if(j==0){
        printf("\nTrue\n");
    }
    else{
        printf("\nfalse\n");
    }
    
}