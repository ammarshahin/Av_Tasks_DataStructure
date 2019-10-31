/* The program is a C Program to Implement the Linked List Functions
   Created by : Ammar Shahin
   Date : 31/10/2019
                                                                    */


#ifndef LINKEDLISTS_H_INCLUDED
#define LINKEDLISTS_H_INCLUDED


typedef struct ST_node{
	int data;
	ST_node* next;
}ST_node;

typedef struct ST_list{
	ST_node* listHead;
}ST_list;


char createList(ST_node *list);
static ST_node* create_Node();
char insertToList(ST_node *listHead, unsigned char position, int data);
void deleteFromList(ST_node *listHead, unsigned char position, int* data);
ST_node* searchIntoList(ST_node *listHead, int data);
void sortList(ST_node *listHead); //Bonus
void reverseList(ST_node *listHead);


/*
void init_List();
struct node* create_Node();
void append(int);
void insert_Node(int);
struct node* search_Node(int);
int delete_Node(int);
void Free_List();
void replace_Node(int,int);
*/
#endif // LINKEDLISTS_H_INCLUDED
