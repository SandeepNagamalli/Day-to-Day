#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>  //Header file for sleep(). man 3 sleep for details. 
  
   
int main() 
{ 
int m = 3 , n =5;
int **a =(int **)malloc(m * sizeof(int *));

for(int i =0 ; i<m; i++)
  a[i] = (int *)malloc(n*sizeof(int));

a[2][3] = 51;

    printf("val at a[2][3] is %d\n", a[2][3]); 
    exit(0); 
}
