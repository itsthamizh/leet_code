/*

This program for string to integer 

Example for:
    input: "42"   then another one is: "-42"
    output: 42        output for this: 42

*/

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

int convert(char[]);

void main(){
    int len;
    char string[100];
    printf("Enter the strings :\n");
    scanf("%s",string);
    len=strlen(string);
    convert(string);

}

int convert(char string[]){
    int i,len,j=0;
    char arr[50];
    len=strlen(string);
    for(i=0;i<len;i++){
        if(string[i]=='\t'){

        }
        else if(string[i]>='0' && string[i]<='9'){
            arr[j]=string[i];
            j++;
        }
        else if(string[i] > '9'){
            break;
        }

    }   
    printf("%s\n",arr);    
}