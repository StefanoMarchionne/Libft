#include "libft.h"

/*!
 * @brief 
	The memchr() function scans the initial n bytes of the memory area pointed 
	to by s for the first instance of c; 
	Both c and the bytes of the memory area pointed to by s are interpreted as 
	unsigned char.
 * @return 
	The memchr() function return a pointer to the matching byte or NULL if the 
	character does not occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	unsigned char	chr;

	ptr_s = (unsigned char *) s;
	chr = (unsigned char) c;
	while (n)
	{
		if (*ptr_s == chr)
			return (ptr_s);
		n--;
		ptr_s++;
	}
	return (0);
}
