/*
 * Stack.h
 *
 *  Created on: Oct 30, 2019
 *      Author: Ammar Shahin
 */

#ifndef STACK_H_
#define STACK_H_


typedef struct{
  int* node;
	int Top;
	int Size;
}ST_stackInfo;


void createStack(ST_stackInfo *info, int size);
void push(ST_stackInfo *info, int data);
void pop(ST_stackInfo *info, int* data);

#endif /* STACK_H_ */
