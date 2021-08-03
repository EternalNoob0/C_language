#include "stdio.h"
#include "conio.h"
void main ()
{
	/* Variable/Function prototype Declaration */
	char string1[25];
	char string2[25];
	int x;

	int mystrcmp (char *,char *);
	int mystrlen (char *);

	/* Main Program */
	clrscr ();
	printf ("Enter First string less than 25 char:");
	gets (string1);
	printf ("Enter Second string less than 25 char:");
	gets (string2);
	x=mystrcmp(string1,string2);
	if (x == 0)
	{
		printf ("Entered strings are identical");
	}
	else if (x == 1)
	{
		printf ("Strings are of different length");
	}
	else
	{
		printf ("Entered strings are not identical %d",x);
	}
}

/* String compare function */

int mystrcmp (char *str1,char *str2)
{
	int len1,len2,y;
	int i = 0;

	len1 = mystrlen (str1);
	len2 = mystrlen (str2);

	if (len1 == len2)
	{
		for (i = 0 ; i <= (len1-1) ; i++)
		{
			if (*str1 == *str2)
			{
				str1++;
				str2++;
				y=0;
			}
			else
			{
				y=(*str1 - *str2);
				break;
			}
		}
	}
	else
	{
		y = 1;
	}

	return y;
}

/* String Length function */
int mystrlen (char *p)
{
	int x = 0;
	{
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
}
