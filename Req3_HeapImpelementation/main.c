/* Stack implementation - Array based Dynamic Allocation - in C
	Created by : ammar shahin
	Data : 30/10/2019                              */

#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i,data;
  ST_queueInfo queue;
  createQueue(&queue,20);


  for(i = 0; i < 20;i++)
      enqueue(&queue,i);

  for(i = 0; i < 20; i++){
      dequeue(&queue,&data);
      printf("%d ",data);
  }
  return 0;
}
