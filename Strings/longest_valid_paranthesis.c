#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int len,n;
    char string[100];
    printf("Enter the parantheses: \n");
    scanf("%s",string);
    len=strlen(string);

    n=count_parantheses(string);
    
    printf("%d",n);
}

int count_parantheses(char string[]){
    int i, j=0, k=0;
    int len;
    len=strlen(string);
    for(i=0;i<len;i++){
        if(string[i]=='('){
            j=j+1;
        }
        else if(string[i]==')'){
            k=k+1;
        }
    }
    if(j==k){
        return j;
    }
    else{
        if(j<k){
            j=j*2;
            return j;
        }
        else{
            k=k*2;
            return k;
        }
    }
}