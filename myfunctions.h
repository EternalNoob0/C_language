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
