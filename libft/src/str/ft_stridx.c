#include "libft.h"

/*!
 * @brief 
	This function searches for c in s and if present returns an integer 
	representing the index of c.
 * @return 
	Int representing the index of c.
	-1 if c not present.
 */
ssize_t	ft_stridx(char *s, int c)
{
	ssize_t	i;

	i = 0;
	if (!c)
	{
		if (!*s)
			return (0);
		while (s[i])
			i++;
		return (i);
	}
	while (s[i] || (!c && !s[i]))
	{
		if (s[i] == c || (!c && !s[i]))
			return (i);
		i++;
	}
	return (-1);
}
