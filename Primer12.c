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
	int a;
	int r;
	const float P = 3.14;
	float C;
	float S;
	printf("VVedi radius\n");
	scanf("%d",&r);

	S=P*r*r;
	printf("TTJlOLLlADb= %0.2f \n",S);
	C=r*2*P;
	printf ("DLINA= %0.2f \n", C);  
	return 0;
}

