/*

This program for to find out the total minimum of
the people staying the two city 

*/


#include<stdio.h>

void main(){
    int array[8][2]={{515,563},
                    {451,713},
                    {537,709},
                    {343,819},
                    {855,779},
                    {457,60},
                    {650,359},
                    {631,42}
                    };
    
    sheduling(array);
}

void sheduling(int array[8][2]){
      int i,j,k=0,val=0;
    
    for(i=0;i<8;i++){
     
        for(j=0;j<2;j++){
            if(j==0){
                k=array[i][j];
            } 
            else{
                if(array[i][j]<k){
                    k=array[i][j];
                }
            }
        }
        val=k+val;
    }
    printf("%d",val);

}
