#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    char num1[100];
    printf("Enter the first number: \n");
    gets(num1);

    char num2[100];
    printf("Enter the second number: \n");
    gets(num2);

    addition(num1, num2);
}
int addition(char num1[], char num2[]){
    int len1, len2, val, carry=0;
    len1=strlen(num1);
    len2=strlen(num2);
    int i=len1-1;
    int j=len2-1;
    val= len1+len2;

    char sum[val];

    while(len1 > 0 || len2 > 0){
        sum[val-1]=(num1[i]%10 + num2[j]%10 +carry)%2;
        carry=(num1[i]%10 + num2[j]%10)/2;
        i++;
        j++;
        val--;
        len1--,len2--;
    }

    printf("%s\n",sum);
}