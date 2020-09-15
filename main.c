// Author: Manan Patel mxp5787@psu.edu 
// Collabarator: Sydney Wetzel skw5571@psu.edu
// Collabarator: Efe Sahin ess5439@psu.edu
// Section: 7
// Breakout: 11 


#include <stdio.h>
#include<readline/readline.h>
#include<stdlib.h>
int sum_n(int number){
  if(number == 0){
    return 0;
  }
  else{
    return number + sum_n(number - 1);
  }
}
void print_n(char* str,int number){
  if(number >0){
    printf("%s\n",str);
    print_n(str,number-1);
  }
}

int main(void) {
  int number = atoi(readline("Enter an int: "));
  int sum = sum_n(number);
  printf("sum is %d.\n",sum);
  char * str = readline("Enter a string: ");
  print_n(str,number);
}