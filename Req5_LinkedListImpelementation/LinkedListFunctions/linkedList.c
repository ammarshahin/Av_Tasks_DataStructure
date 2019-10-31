/* The program is a C Program to Implement the Linked List Functions
   Created by : Ammar Shahin
   Date : 31/10/2019
                                                               */
#include <stdio.h>
#include <stdlib.h>
#include "linkedLists.h"

char createList(ST_node *listHead){
       listHead = NULL; // set the Start pointer to point at nothing as the list is empty
}



/* Function to Dynamically allocate memory in the Heap and return the pointer points to this space                                                         */
static ST_node* create_Node(){
	return ((ST_node*) malloc(sizeof(ST_node)));
}
/* Note: we should always cheek the return pointer as it may be NULL if there was not enough memory in the heap                                              */







/* the Insert Function receives the data to be inserted____ and don't return any thing */
char insertToList(ST_node *listHead, unsigned char position, int data){
	ST_node* element = create_Node();

	if(element == NULL)
    {
        return 0;
    }
    else
    {
        // Do Nothing
    }

	element->data = data;
	unsigned char counter = 1;
    ST_node* temp = listHead;

    if(listHead == NULL){                // the list is empty
		listHead = element;
		element->next = NULL;
		return 1;
    }

    while( (temp->next != NULL) && ( counter != position))
    {
			temp = temp->next;
			counter++;
    }

    element->next = temp->next;
    temp->next = element;
    return 1;
}


/* Function that deletes a certain node.
It receives the position of the element, returns 1 if the data was found and deleted and, returns 0 if the data wasn't found  */
void deleteFromList(ST_node *listHead, unsigned char position, int* data){
    ST_node* temp = listHead;
    unsigned char counter = 1;

    while( (temp->next != NULL) && (counter != position) ){
			temp = temp->next;
            counter++;
    }

    if(temp->next == NULL)  // the Node wasn't found ______ OR the List is empty
		return 0;

	if(position == 0){   // the Data is at First and it's the only element in the List
		listHead->next = NULL;  // reset the list to be empty
		free(temp->next);
		return 1;
	}else if(temp->next->next == NULL && position == counter){    // the Data is at the End of the List
		temp->next = NULL;
		free(temp->next);
		return 1;
	}else{                      // the Data is at The Middle
		temp->next = temp->next->next;
		free(temp->next);
		return 1;
	}
}



/*the Replace Function receives the data to be replaced and the replacement data___and don't return any thing*
void replace_Node(int data1,int data2){
    struct node* temp = search_Node(data1);

	if(temp == NULL){    // the search function didn't find the replaced data
		printf("data not found!!");
	}else{               // Found
		temp->data = data2;
	}
}
*/
/* Function to Search for the Node ____ Take data and return the address of the element *
struct node* search_Node(int d){
	struct node* temp;
	temp = START;
	while((temp!=NULL)&&(temp->data!=d)){ // Loop through all the elements until the element is Found
		temp = temp->next;
	}
	return temp;
}*/


/* clear all elements in the List *
void Free_List(){
    struct node* temp = START;   // temp is now pointing to the first element
	while(temp!= NULL){         // Loop through all the elements
		START = START->next;   // Make the next element the first One
		free(temp);           // free the pointing to element
		temp = START;        // temp is now pointing to the Next element
	}
	init_List();           // Re-initiate the list
} */
