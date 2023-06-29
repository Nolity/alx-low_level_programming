#include "main.h"

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/*Find the end of the destination string*/
	while (*ptr != '\0')
		ptr++;
	/* Append the source string to the destination string*/
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	/* Add the terminating null byte*/
	*ptr = '\0';
	return (dest);
}
