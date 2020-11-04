/*

This programe for to find out the iven matrix are same or not  

*/



#include<stdio.h>
#define n 4

void main(){
    int a[n][n]={{1, 1, 1, 1}, 
                 {2, 2, 2, 2}, 
                 {3, 3, 3, 3}, 
                 {4, 4, 4, 4}
                };
    int b[n][n]={{1, 1, 1, 1}, 
                 {2, 2, 2, 2}, 
                 {3, 3, 3, 3}, 
                 {4, 5, 4, 4}
                };

    int m=aresame(a,b);
    if(m==1){
        printf("\nMatrix are same \n");
    }
    else{
        printf("\n matrix are not same \n");
    }

}

int aresame(int a[n][n], int b[n][n]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=b[i][j]){
                return 0;
            }
        }
    }
    return 1;
}