#ifndef NODEH
#define NODEH  
struct NODE{
	struct NODE *next;
	int data;
};

void newList(); //i put this here so that main will know these functions exist 
int addNode(int value);
void prettyPrint();
#endif