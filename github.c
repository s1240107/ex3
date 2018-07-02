#include<stdio.h>
#include<stdlib.h>

int main(){
  srand(time(NULL));
  
  int i, a[2], sum=0;
  
  printf("Rolling the dice...\n");
 
  
  for(i = 0; i < 2; i++) {
    a[i] = rand() % 6 + 1;
    printf("Die %d: %d\n", i + 1, a[i]);
    sum += a[i];
  }
 
  printf("Total value: %d\n", sum);
  
  
  return 0;
}
