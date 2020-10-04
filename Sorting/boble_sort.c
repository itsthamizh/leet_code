#include<stdio.h>
void main(){
    int n = 5;
    int a[n] = {6,2,9,3,7};
    int i,j,k,temp;
    
    for(k=0;k<n;k++){
        printf("%d",a[k]);
        printf("\n");
    }
    
    printf("\n");
    
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(k=0;k<n;k++){
        printf("\n%d ",a[k]);
        printf("\n");
    }
}