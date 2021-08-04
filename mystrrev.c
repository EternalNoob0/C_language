#include "stdio.h"
#include "string.h"

void main ()
{
	char mystring[15];
	int n;
	int mystringrev (char *, int);


	printf ("\nEnter something from keyboard : ");
	gets (mystring);
    printf ("Your entered string is %s",mystring);	
    n = strlen (mystring);

}

int mmystringrev (char *p, int x)
{

        int *q;
        int i;
        q = p + x;

        for (i = x; i <= 0; i--)
        {
            printf ("%c",*q);
            q--;

        }
	
}
