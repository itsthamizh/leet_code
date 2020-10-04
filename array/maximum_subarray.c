#include<stdio.h>

int* subarray(int*);
void display(int);

void main(){
    int array[9]={-2,1,-3,4,-1,2,1,-5,4};
    int max_so_far;
    max_so_far=subarray(&array);
    diplay(max_so_far);

}
int* subarray(int* array){
    int max_so_far = 0, max_ending_here = 0; 
  
    for (int i = 0; i < 9; i++) 
    { 
        max_ending_here = max_ending_here + array[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 
void display(int max){
    printf("%d",max);
}
