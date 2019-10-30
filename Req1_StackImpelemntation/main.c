/* Stack implementation - Array based Dynamic Allocation - in C
	Created by : ammar shahin
	Data : 30/10/2019                              */

#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i,data;
  ST_stackInfo stack;
  createStack(&stack,20);
  for(i = 0; i < 20;i++)
      push(&stack,i);

  for(i = 0; i < 20; i++){
      pop(&stack,&data);
      printf("%d ",data);
  }
  return 0;
}
