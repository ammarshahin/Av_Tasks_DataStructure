/*
 * Queue.c
 *
 *  Created on: Oct 30, 2019
 *      Author: Ammar Shahin
 */

#include "queue.h"

void createQueue(ST_queueInfo* info, int maxSize)
{
    info->node = (int*) malloc(maxSize*sizeof(int));
    info->Size = maxSize;
    info->Top  = 0;
    info->rare = -1;
}

void enqueue(ST_queueInfo *info, int data)
{
  if( (info->Top) < (info->Size))
  {
    info->node[info->Top] = data;
    info->Top++;
  }
  else
  {
    printf("NO ENOGH SPACE!!!\n");
  }
}

void dequeue(ST_queueInfo *info, int* data)
{
   if( (info->Top > 0) && (info->rare < info->Top))
  {
    info->rare++;
    *data = info->node[info->rare];
  }
  else
  {
    printf("Queue is Empty\n");
  }
}


