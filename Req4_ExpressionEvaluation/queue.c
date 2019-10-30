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
    info->rare = 0;
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
    printf("NO ENOGH SPACE in Queue!!!\n");
  }
}

void dequeue(ST_queueInfo *info, int* data)
{
   if( (info->Top > 0) && (info->rare < info->Top))
  {
    *data = info->node[info->rare];
    info->rare++;
  }
  else
  {
    printf("Queue is Empty\n");
  }
}

int getQueueBase(ST_queueInfo *info)
{
    if( (info->Top > 0) && (info->rare < info->Top))
            return info->node[info->rare];
    else
            return 0;
}


