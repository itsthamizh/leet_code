/*

This program for to find the given two strins to
longest uncommon subsequence

Example for:
    input: a=abc, b=cdc
    output: 3

    input: a=bbb, b=aaa
    output: 0

*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int i, j, len_a, len_b;

    char a[100];
    printf("Enter the first string:\n");
    gets(a);

    len_a=strlen(a);

    char b[100];
    printf("Enter the second string:\n");
    gets(b);
    
    len_b=strlen(b);

    for(i=0;i<len_a;i++){
        for(j=0;j<len_b;j++){
            if(a[i]==b[j]){
                len_a--;
            }
        }
    }
    printf("\n%d\n",len_a);
}