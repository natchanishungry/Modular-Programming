#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#define failure 0
#define success 1

static struct NODE *head; //static global variable is "seen" only in the file it's decared in 

void newList(){
	head = NULL;
}

int addNode( int value ){ 
	struct NODE *temp = head; 
	head = (struct NODE *) malloc( sizeof(struct NODE) );
	if(head == NULL) return failure; //if head wasn't created then 0 would be returned
	head->data = value;
	head->next = temp;
	return success;
}

void prettyPrint(){
	struct NODE *temp = head; 
	while(temp != NULL){
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}