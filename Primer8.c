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
int x(int a, int b)
{
     if (a > b)
    {   
       		return a;
    } 
     else
    { 
		
     	return b;
    }
}
int main(int argc, char *argv[])
{
     printf("BBEDITE A u B ");
     int a,b;
     scanf ("%d",&a);
    scanf ("%d",&b);
    printf ("Bolshee chislo %d ", x(a,b));
    return 0;
}
