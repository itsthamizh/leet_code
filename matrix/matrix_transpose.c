#include<stdio.h>
#define n 4

void main(){
    int a[n][n]={{1, 1, 1, 1}, 
                 {2, 2, 2, 2}, 
                 {3, 3, 3, 3}, 
                 {4, 4, 4, 4}
                };
    int b[n][n],i,j;
    transpose(a,b);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
       printf("\n");
    }
}

int transpose(int a[n][n], int b[n][n]){
    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            b[i][j]=a[j][i];
        }
    }
}