#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] ){
	int number;
	scanf( "%d", &number );
	newList();

	while( number>0 ){
		if(addNode( number )) scanf( "%d", &number );	
		else puts("There was an error.");
	}

	prettyPrint();
}