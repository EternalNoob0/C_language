#include "stdio.h"

void main ()
{
    int a [3][3] ;
    int b [3][3] ;
    int c [3][3] ;
    int i=2, j=2 ;
    
    void getarray ( int *, int *, int, int ) ;
    void sumarray ( int *, int *, int *, int, int ) ;
    void showresult ( int *, int, int ) ;

    getarray (&a[0][0],&b[0][0],i,j);
    sumarray (&a[0][0],&b[0][0],&c[0][0],i,j);
    showresult (&c[0][0],i,j);

}

void getarray (int *x, int *y, int r, int c)
{
    int i,j;

    for (i = 0; i <= r; i++)
    {
        for (j = 0; j <= c; j++)
        {
            printf ("Please enter array values A(%d %d): ",i,j) ;
            scanf ("%d", x) ;
            x++ ;
        }

    }

    for (i = 0; i <= r; i++)
    {
        for (j = 0; j <= c; j++)
        {
            printf ("Please enter array values B(%d %d): ",i,j) ;
            scanf ("%d", y) ;
            y++ ;
        }

    }

}

void sumarray (int *x, int *y, int *z, int r, int c)
{
    int i,j;
    for (i = 0;i <= r; i++)
    {
        for (j = 0; j <= c; j++)
        {
            *z = *x + *y;
        x++;
        y++;
        z++;
        }

    }

}

void showresult ( int *z, int r, int c)
{
    int i,j;
    for (i = 0;i <= r; i++)
    {
        for (j = 0; j <= c; j++)
        {
            printf ("%d ", *z);
            z++;
        }
        
        printf ( "\n" );
    }

}
