#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
int main(){
  char name[N];
  int number1, number2;
  srand(time(NULL));
  number1=rand()%6+1;
  number2=rand()%6+1;

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  
  printf("The twomdice numbers are ...\n");
  printf("%d\n",number1);
  printf("%d\n",number2);

  int total=number1+number2;

  printf("The total of the numbers is %d\n",total);
  if(total>7)
    printf("You won!\n");
  else
    printf("You lost\n");


  return 0;
}
