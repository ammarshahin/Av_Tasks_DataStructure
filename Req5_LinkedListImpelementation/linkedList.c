/* The program is a C Program to Implement the Linked List Functions
   Created by : Ammar Shahin
   Date : 31/10/2019
                                                               */
#include <stdio.h>
#include <stdlib.h>
#include "linkedLists.h"

void createList(ST_node *listHead){
       listhead = NULL; // set the Start pointer to point at nothing as the list is empty
}



/* Function to Dynamically allocate memory in the Heap and return the pointer points to this space                                                         */
ST_node* create_Node(){
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
    ST_node* temp = listhead;

    if(listhead == NULL){                // the list is empty
		listhead = element;
		element->next = NULL;
		return 1;
    }

    if(position == 0)
    {
        element->next = listhead;
        listhead = element;
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
It receives the position of the element, returns 1 if the data was found and deleted and, returns 0 if the data was not found  */
char deleteFromList(ST_node *listHead, unsigned char position, int* data){

    ST_node* temp = listhead;
    ST_node* temp2 = listhead;
    unsigned char counter = 1;

    if(temp == NULL)    // the list is empty
    {
        return 0;
    }
    else if(position == 0) // the list has only one element
    {
        listhead = temp->next;
        free(temp);
        return 1;
    }
    else
    {
        temp2 = temp2->next;
    }


    while( temp2->next != NULL )
    {
        if(counter == position)
        {
            temp->next = temp2->next;
            free(temp2);
            return 1;
        }

        temp2 = temp2->next;
        temp = temp->next;
        counter++;
    }

    if( (temp2->next == NULL) && (counter == position) )
    {
        temp->next = NULL;
        free(temp2);
        return 1;
    }
    return 0;
}




ST_node* searchIntoList(ST_node *listHead, int data)
{
    ST_node* temp = listHead;
    unsigned char counter = 0;
    if(temp== NULL)
        return NULL;


    while( temp->next != NULL ){

        if(temp->data == data)
            return temp;
        else
            temp = temp->next;

        counter++;
    }

    if(temp->data == data)
        return temp;
    else
        return  NULL;
}


char sortList(ST_node *listHead)
{
    int swapped;
    ST_node *ptr1;
    ST_node *lptr = NULL;

    /* Checking for empty list */
    if (listhead == NULL)
        return 0;

    do{
        swapped = 0;
        ptr1 = listhead;

        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            {
                swapTwoNodes(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }while (swapped);
    return 1;
}

void swapTwoNodes(ST_node* node1,ST_node* node2)
{
    int tempData = node1->data;
    node1->data = node2->data;
    node2->data = tempData;
}

/* clear all elements in the List */
void Free_List(ST_node* listHead){
    ST_node* temp = listhead;              // temp is now pointing to the first element
	while(temp!= NULL){                   // Loop through all the elements
		listhead = listhead->next;       // Make the next element the first One
		free(temp);                     // free the pointing to element
		temp = listhead;               // temp is now pointing to the Next element
	}
	listhead = NULL;                 // Re-initiate the list
}


char reverseList(ST_node *listHead)
{
    ST_node *prevNode, *curNode;

    if(listhead != NULL)
    {
        prevNode = listhead;
        curNode = listhead->next;
        listhead = listhead->next;

        prevNode->next = NULL; // Make first node as last node

        while(listhead != NULL)
        {
            listhead = listhead->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = listhead;
        }

        listhead = prevNode; // Make last node as head
    }
    return 1;
}
