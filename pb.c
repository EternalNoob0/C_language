#include "stdio.h"
#include "conio.h"

struct pb
{
	char name[25] ;
	char phone[10] ;
} ;

struct pb e ;

FILE *p ;

void mainmenu () ;
void add () ;
void list () ;
void del () ;
void modify () ;
void search () ;
void wronginput () ;
void closeprogram () ;
void opendb () ;

void main ()
{
	opendb () ;
	mainmenu () ;
}

void mainmenu ()
{
	int choice ;

	while (1)
	{
		clrscr () ;
		printf ("------------------\n") ;
		printf ("My Phone Book\n") ;
		printf ("------------------\n") ;
		printf ("1. Add Record\n") ;
		printf ("2. List All Records\n") ;
		printf ("3. Modify Record\n") ;
		printf ("4. Search Record\n") ;
		printf ("5. Delete Record\n") ;
		printf ("0. Exit System\n") ;
		printf ("------------------\n") ;
		printf ("Enter Your Choice : ") ;
		fflush (stdin) ;
		scanf ("%d", &choice) ;

		switch (choice)
		{
			case 1:
				add () ;
				break ;
			case 2:
				list () ;
				break ;
			case 3:
				modify () ;
				break ;
			case 4:
				search () ;
				break ;
			case 5:
				del () ;
				break ;
			case 0:
				closeprogram () ;
				break ;
			default:
				wronginput () ;
		}

	}
}

void add ()
{
	clrscr () ;
	printf ("Add Record\n\n") ;
	printf ("Enter Name : ") ;
	fflush (stdin) ;
	gets (e.name) ;
	printf ("\nEnter Phone : ") ;
	fflush (stdin) ;
	gets (e.phone) ;

	fseek (p, 0L, SEEK_END) ;
	fwrite (&e, sizeof (e), 1, p) ;

	printf ("\n\nRecord Added Successfully . . . ") ;
	getch () ;
}

void list ()
{
	printf ("I am in list") ;
	getch () ;

}

void modify ()
{
	printf ("I am in modify") ;
	getch () ;

}

void del ()
{
	printf ("I am in del") ;
	getch () ;

}

void closeprogram ()
{
	printf ("I am in close program") ;
	getch () ;
	fclose (p) ;
	exit (0) ;

}

void wronginput ()
{
	printf ("I am in wrong input") ;
	getch () ;
}

void search ()
{
	printf ("I am in search . . . ") ;
	getch () ;
}

void opendb ()
{
	p = fopen ("pb.db", "rb+") ;

	if (p == NULL)
	{
		p = fopen ("pb.db", "wb+") ;

		if (p == NULL)
		{
			printf ("\nUnable to open database file . . . ") ;
			getch () ;
		}
	}
}