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
 	int i=-1;
	int n=0;
	int sum=0;
	int sum1=0;
	while (n<1000 || i<1000 )
	{
		i+=2;
		sum+=i;
		n+=2;
		sum1+=n;
	}
	printf ("CYMMA H E 4 E T H bI X =%d \n", sum);
	printf ("CYMMA 4 E T H bI X =%d \n", sum1);
	printf ("I=%d \n", i);
	printf ("N=%d \n", n);
	int k=13;
	if (div(k,2)*2==k)
	{
	printf("k-4 E T H O E\n");
	}
	else
	{
	printf("k - H E 4 E T H O E\n");
	}
        
	return 0;
}



