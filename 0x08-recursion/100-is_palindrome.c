#include "main.h"
int leng(char *s);
char *_retrev(char *s, int n);
int compstr(char *s1, char *s2)

/**
 * is_palindrome- tells whether prime nmber or not
 * @n: is the number
 * Return: 1 if true  and 0 if false
 */
int is_palindrome(char *s)
{
	int l = leng(s);
	char *revptr = _retrev(s);
	int comp = compstr(s, revptr);

	return (comp);
}

/**
 * realp- the real prime
 * @nu: the number whose prime is needed
 * @i: counter
 * Return: 1 or 0
 */
int leng(char *s)
{
        int l = 1;
        if (*s != '\0')
        {
                l = l++;
        }
        return (l);
}
char *_retrev(char *s, int n)
{
	char r;
	char *ptr;
	int i = 0;

	if (*s != '\0')
	{
		r[n - 1] = s[i];
		*_retrev(s[i + 1], n - 1);
	}
	ptr = &r;

	return (ptr);
}
int compstr(char *s1, char *s2)
{
	int i = 0;
	
	if (*s1 != '\0' && *s2 != '\0')
	{
		if (s1[i] != s2[i])
		{
		return (0);
		}
		else
		{
		compstr(s1[i + 1], s2[i + 1];
		}
	}
	return (1);
}
