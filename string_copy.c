#include "stdio.h"
#include "conio.h"
void main ()
{
	/* Variable/Function prototype Declaration */
	char source[25];
	char target[25];

	void mystrcp (char *,char *);
	int mystrlen (char *);

	/*Main Program*/
	clrscr();
	printf ("Enter String to be copied less than 25 Char:");
	gets(source);
	mystrcp (source,target);
	printf ("Copied string is %s",target);
}
/* String Copy Function */
void mystrcp (char *s,char *t)
{
	int i;
	int len;
	len=mystrlen(s);

	for (i = 0; i <= (len-1);i++)
	{
	   *t = *s;
	   s++;
	   t++;
	}
}

/* String length Function */
int mystrlen (char *p)
{
	int x = 0;
	while (1)
	{
		if (*p == '\0')
		{
			break;
		}
		else
		{
			x++;
			p++;
		}
	}
	return x;
}

