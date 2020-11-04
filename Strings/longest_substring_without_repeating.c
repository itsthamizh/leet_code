/*

This program for longest substring without repeating
characters

Example for:
    input: abcabcbb
    output: 3

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    char string[100];
    int a[50], i, j, len, value, k=0;
    printf("Enter the strins :\n");
    scanf("%ss ",string);

    len=strlen(string);

    for(i=0;i<len;i++){
        for(j=0;j<i+1;j++){
            if(string[i] != a[j] && a[j]==NULL){
                a[j]=string[i];
                value++;
            }
            else if(string[i]==a[j]){
                if(k<value){
                    k=value;
                }
               // for(i=0;i<=value;i++){
              //      a[i]=NULL;
                //}
                value=0;
              j=i-1; 
            }
        }
    }
    printf("%d ",k);

}