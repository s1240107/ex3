#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  srand(time(NULL));
  
  int i, a[2], sum=0;
  char name[30];

  printf("What is your name?\n");
  scanf("%s", &name);
  printf("Hello, %s!\n", &name);
  
  
  printf("Rolling the dice...\n");
 
  
  for(i = 0; i < 2; i++) {
    a[i] = rand() % 6 + 1;
    printf("Die %d: %d\n", i + 1, a[i]);
    sum += a[i];
  }
 
  printf("Total value: %d\n", sum);

  if(sum > 7){
    printf("%s won!\n", &name);
  }
  else{
    printf("%s lost.\n", &name);
  }
  
  return 0;
}
