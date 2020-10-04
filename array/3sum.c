#include<stdio.h>

void main(){
    int array[6]={-1,0,1,2,-1,4};
    int i,j,k;
    int sum;

    for(i=0;i<6;i++){
        for(j=i+1;i<6;i++){
            for(k=j+1;k<6;k++){
                sum=array[i]+array[j]+array[k];
                if(sum==0){
                    printf("%d %d %d\n",array[i],array[j],array[k]);
                }
            }
        }
    }
}