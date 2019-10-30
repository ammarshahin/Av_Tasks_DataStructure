/*
 * Stack.c
 *
 *  Created on: Oct 30, 2019
 *      Author: Ammar Shahin
 */

#include "Stack.h"

void createStack(ST_stackInfo *info, char size)
{
    info->node = (char*) malloc(size*sizeof(char));
    info->Size = size;
    info->Top  = 0;
}

void push(ST_stackInfo *info, char data)
{
  if( info->Top < info->Size)
  {
    info->node[info->Top] = data;
    info->Top++;
  }
  else
  {
    printf("NO ENOGH SPACE!!!\n");
  }
}

void pop(ST_stackInfo *info, char* data)
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




