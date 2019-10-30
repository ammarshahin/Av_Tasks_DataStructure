/* check For Balance in C With stack
	Created by : ammar shahin
	Data : 30/10/2019                    */


#include <stdlib.h>
#include "Stack.h"
#include <stdio.h>
#include <string.h>

char matching_Pairs(char x,char y);
char check_ForBalance(ST_stackInfo *info,char* arr);

int main(void)
{
  char result;
  char arr[20];
  ST_stackInfo stack;
  createStack(&stack,20);
  scanf("%s",arr);
  result = check_ForBalance(&stack,arr);
  if(result)
	  printf("Balanced\n");
  else
	  printf("UN Balanced\n");
  return 0;
}


char check_ForBalance(ST_stackInfo *info,char* arr)
{
	int i = 0;
	char data;
	while(arr[i]){
	  	if(arr[i] == '(' || arr[i] == '{' || arr[i] == '[')
	  	{
	  		push(info,arr[i]);
	  	}
        else if(arr[i] == ')' || arr[i] == '}' || arr[i] == ']')
	  	{
	  	    if (info->Top == 0)
                return 0;

	  		pop(info,&data);
	  		if(matching_Pairs(data,arr[i]))
            {
                i++;
                continue;

            }else
	  			return 0;
	  	}
	  	else
	  	{
	  	    printf("Not Valid!!!\n");
	  	}
	  	i++;
	}

	 if (info->Top == 0)
     return 1; /*balanced*/
    else
     return 0;  /*not balanced*/
}


char matching_Pairs(char x,char y)
{
		if (x == '(' && y == ')')
			return 1;
		else if (x == '{' && y == '}')
			return 1;
		else if (x == '[' && y == ']')
			return 1;
		else
			return 0;
}
