//1267

#include<stdio.h>

void main(){
    int array[2][2]={{1,0},{1,1}};
    int k;
    k=server_communication(array);
    printf("%d",k);
}

int server_communication(int array[2][2]){
    int i=0,j=0,k=0;
    while(j<2-1){
        i=0;
        if(array[i][j] == array[i][j+1]){
            k=k+2;
        }
        j++;
    }
    while(i<2-1){
        j=0;
        if(array[i][j] == array[i+1][j]){
            k=k+2;
        }
        i++;
    }
    return k;
}