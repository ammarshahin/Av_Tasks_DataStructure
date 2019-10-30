/* check For Balance in C With stack
	Created by : ammar shahin
	Data : 30/10/2019                              */


#include <stdlib.h>
#include "Stack.h"
#include "queue.h"
#include <stdio.h>
#include <string.h>

ST_stackInfo stack;
ST_queueInfo queue;

char matching_Pairs(int x,int y);
char check_ForBalance(ST_stackInfo *info,char* arr);
long long evaluate(char* expression);

int main(void)
{
  long long result;
  char arr[20];
  createStack(&stack,200);
  createQueue(&queue,200);
  scanf("%s",arr);
  result = evaluate(arr);
  if(result)
        printf("the result is = %ld\n",result);
  else
        printf("UN Balanced\n");
  return 0;
}


char check_ForBalance(ST_stackInfo *info,char* arr)
{
	int i = 0;
	int data,data2;
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
            {
	  			return 0;
            }
	  	}
	  	else
	  	{
                //pop(&stack,&data2);
				 enqueue(&queue,arr[i]);
	  	}
	  	i++;
	}

	 if (info->Top == 0)
     return 1; /*balanced*/
    else
     return 0;  /*not balanced*/
}


char matching_Pairs(int x,int y)
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


long long evaluate(char* expression)
{
    int check;
    char arr[20],i;
    long long result = 0;
    check = check_ForBalance(&stack,expression);
    if(check)
    {
        for(i=0;i<queue.Top;i++)
        {
            arr[i] = queue.node[i];
        }
        i=0;
		while(i < queue.Top)
		{
				switch(arr[i])
				{
					case '+':
							arr[i+1] = (arr[i-1] - 48) + (arr[i+1] - 48);
							break;
					case '-':
							arr[i+1] = (arr[i-1] - 48) - (arr[i+1] - 48);
							break;
					case '*':
							arr[i+1] = (arr[i-1] - 48) * (arr[i+1] - 48);
							break;
					case '/':
							arr[i+1] = (arr[i-1] - 48) / (arr[i+1] - 48);
							break;
					//default:
							//printf("Not vallid!!!");
				}
				i++;
		}
		result = arr[(queue.Top)-1];
		return result;
    }
    else{
        return 0;
    }
}
