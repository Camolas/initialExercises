 
// Arrays & C‐Strings 
// ex_00.c 
// A program that reads the evolution of a person's weight 
// during some months of a year 
// JAS 
 
#include <stdio.h> 
 
#define MAX_NAME_LENGTH 50 // avoid "magic numbers" 
#define NUM_MONTHS 12 
 
int main() 
{ 
char name[MAX_NAME_LENGTH]; 
int weight[NUM_MONTHS]; 
int i; 
 
printf("Name ? "); 
scanf("%s", name); // try with "Lou Costello" :‐) 
 
for (i = 0; i < NUM_MONTHS; i++) 
{ 
printf("weight[%d] ? ", i + 1); 
scanf("%d", &weight[i]); 
} 
 
for (i = 0; i < NUM_MONTHS; i++) 
{ 
printf("weight[%d] = %d\n", i + 1, weight[i]); 
} 
 
// TO BE DONE ...??? complete the data processing 
 
return 0; 
} 
 
 
  
