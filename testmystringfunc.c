#include "stdio.h"
#include "conio.h"
#include "myfunctions.h"

void main ()
{
 	/* Variable/Function prototype Declaration */
	char string1[25];
	char string2[25];
	int x;

  /* Using mystrlen string len function from myfunctions.h */
        printf ("Length of string1 is %d",mystrlen(string1));
        printf ("Length of string2 is %d",mystrlen(string2));
  
  /* Using mystrcp string Copy function from myfunctions.h */
        printf ("Enter String to be copied less than 25 Char:");
        gets(string1);
        mystrcp (string1,string2);
        printf ("Copied string is %s",string2);
  
  
	/* Using mystrcmp string Comapre function from myfunctions.h */
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
