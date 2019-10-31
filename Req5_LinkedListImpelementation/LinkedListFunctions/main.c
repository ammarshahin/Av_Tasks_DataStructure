/* The program is a C Program to Implement the Single Linked List
   Created by : Ammar Shahin
   Date : 31/10/2019
                                                                    */


#include <stdio.h>  /* include the header file containing function used */
#include <stdlib.h>
#include "linkedLists.h"

int main(){ /* the program starts here */

/* declare variables used */
	int  choice,r=0,r2;
	ST_node* temp = NULL;
    createList(listhead);
/* print the list of choices */
	printf("1. Print the list.\n");
	printf("2. Insert an element.\n");
	printf("3. Delete an element.\n");
	printf("4. Sort the list.\n");
	printf("5. Reverse the list.\n");
	printf("6. Free the List.\n");
	printf("7. Exit.\n");

	while(1){
		printf("Enter your Choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("The elements of the list: ");
                temp = listhead;
				while( temp != NULL ){
					printf("%d ",temp->data);
                    temp = temp->next;
				}
				printf("\n");
				break;

			case 2:
			    printf("Enter The position to insert to: ");
				scanf("%d",&r);
				printf("Enter The element to insert: ");
				scanf("%d",&r2);
				r = insertToList(listhead,r,r2);
				break;

			case 3:
			    printf("Enter The position of the element to be deleted: ");
				scanf("%d",&r);
                deleteFromList(listhead,r,&r2);
				break;

            case 4:
				break;

            case 5:
				break;

			case 6:
			    printf("Sure you want to Free the list(1 Or 0): ");
				scanf("%d",&r);
				//r ? Free_List() : 0;
				break;

			case 7:
				exit(0);
				break;

			default:
				printf("Invalid Enter!!\n");
		}
		printf("\n");
	}
	return 0;
}
