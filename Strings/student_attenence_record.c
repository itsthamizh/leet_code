/*

This program to find out the strudents attenence record
(The present count must be less then absent and late counts)
Eampr for:
    input: PPALLP
    output: true

    input: PPALLL
    output: false

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int len, i, p=0, a=0, l=0;
    char string[50];
    printf("Enter the string: \n (Only for P-present, A-absent, L-late)\n");
    gets(string);

    len=strlen(string);

    for(i=0;i<len;i++){
        if(string[i]=='P'){
            p=p+1;
        }
        else if(string[i]=='A'){
            a=a+1;
        }
        else if(string[i]=='L'){
            l=l+1;
        }
    }

    if(a < p && l < p){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}