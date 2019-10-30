/*
 * Stack.h
 *
 *  Created on: Oct 30, 2019
 *      Author: Ammar Shahin
 */

#ifndef STACK_H_
#define STACK_H_


typedef struct{
  char* node;
	char Top;
	char Size;
}ST_stackInfo;


void createStack(ST_stackInfo *info, char size);
void push(ST_stackInfo *info, char data);
void pop(ST_stackInfo *info, char* data);

#endif /* STACK_H_ */
