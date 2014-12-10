/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Main entry point.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

int main(int argc, char *argv[])
{
 	int arrag1[6]={1,3,5,2,8,7};
	int size_arrag1;
	sizeof(arrag1);
	printf ("size %d \n", sizeof(arrag1));
	int summa=0;
	/*
	summa=summa+arrag1[0];
	summa=summa+arrag1[1];
	summa=summa+arrag1[2];
	*/
	for (int a=0;a<6;a=a+0)
	{ 
	 	printf ("ELEMENT=%d \n ", arrag1[a]);
		summa=summa+arrag1[a];

	}
	printf ("CYMMA=%d \n", summa);
	return 0;
}

