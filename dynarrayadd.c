include "stdio.h"
#include "conio.h"
#include "alloc.h"

void main ()
{
	int r,c;
	int *ary1;
	int *ary2;
	int *ary12;

	void getarray ( int *, int *, int, int ) ;
	void sumarray ( int *, int *, int *, int, int ) ;
	void showresult ( int *, int, int ) ;


	clrscr();
	printf ("Enter Array size (r:c)");
	scanf ("%d:%d", &r,&c);
  /*Using Malloc dynamic memory allocation*/
	ary1 = (int *) malloc (r*c*2);
	ary2 = (int *) malloc (r*c*2);
	ary12 = (int *) malloc (r*c*2);


	getarray (ary1,ary2,r,c);
	sumarray (ary1,ary2,ary12,r,c);
	showresult (ary12,r,c);

}

/* Array INPUT FUNCTION */
void getarray (int *x, int *y, int r, int c)
{
	int i,j;

	for (i = 1; i <= r; i++)
	{
		for (j = 1; j <= c; j++)
		{
			printf ("Please enter array values ary1(%d %d): ",i,j) ;
			scanf ("%d", x) ;
			x++ ;
		}

	}

	for (i = 1; i <= r; i++)
	{
		for (j = 1; j <= c; j++)
		{
			printf ("Please enter array values ary2 (%d %d): ",i,j) ;
			scanf ("%d", y) ;
			y++ ;
		}

	}

}

/* ARRAY ADDITION FUNCTION */
void sumarray (int *x, int *y, int *z, int r, int c)
{
	int i,j;
	for (i = 1;i <= r; i++)
	{
		for (j = 1; j <= c; j++)
		{
			*z = *x + *y;
		x++;
		y++;
		z++;
		}
	}

}

/* PRINTING OUTPUT OF ARRAY ADDITION */
void showresult ( int *z, int r, int c)
{
	int i,j;
	for (i = 1;i <= r; i++)
	{
		for (j = 1; j <= c; j++)
		{
			printf ("%d ", *z);
			z++;
		}

		printf ( "\n" );
	}

}
