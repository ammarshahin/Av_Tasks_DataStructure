/*
 * Stack.c
 *
 *  Created on: Oct 30, 2019
 *      Author: Ammar Shahin
 */

#include "Stack.h"

void createStack(ST_stackInfo *info, int size)
{
    info->node = (int*) malloc(size*sizeof(int));
    info->Size = size;
    info->Top  = 0;
}

void push(ST_stackInfo *info, int data)
{
  if( info->Top < info->Size)
  {
    info->node[info->Top] = data;
    info->Top++;
  }
  else
  {
    printf("NO ENOGH SPACE in Stack!!!\n");
  }
}

void pop(ST_stackInfo *info, int* data)
{
   if( info->Top > 0)
  {
    info->Top--;
    *data = info->node[info->Top];
  }
  else
  {
    printf("Stack is Empty\n");
  }
}




