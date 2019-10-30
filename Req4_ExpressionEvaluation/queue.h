/*
 * queue.h
 *
 *  Created on: Oct 30, 2019
 *      Author: Ammar Shahin
 */

#ifndef QUEUE_H_
#define QUEUE_H_


typedef struct{
  int* node;
	int Size;
  int Top;
  int rare;
}ST_queueInfo;


void createQueue(ST_queueInfo *info, int size);
void enqueue(ST_queueInfo *info, int data);
void dequeue(ST_queueInfo *info, int* data);
int getQueueBase(ST_queueInfo *info);

#endif /* QUEUE_H_ */
