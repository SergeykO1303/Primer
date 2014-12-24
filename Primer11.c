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
int odd(int k)
{
	if (div(k,2)*2==k)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main(int argc, char *argv[])
{
 	int i=0;
	int sum=0;
	int sum1=0;
	while (i<5)
	{
		i+=1;
		if(odd(i)==1)
			{ 
			sum+=i;
	    	}
		else
			{ 
			sum1+=i;
			}
	}
	printf ("CYMMA H E 4 E T H bI X =%d \n", sum);
	printf ("CYMMA 4 E T H bI X =%d \n", sum1);

	printf ("I=%d \n", i);
	return 0;
	}



